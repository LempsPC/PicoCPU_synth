 
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
 
entity TopLevel is
	port(
	 rst: in std_logic;
    	 clk: in std_logic;
	 ClkBttn: in std_logic;
	 ClockSrc: in std_logic;
	 AN: 			out std_logic_vector(3 downto 0);
    	 SevenSeg: 	out std_logic_vector(6 downto 0);
	 FlagOutput: out std_logic_vector ( 3 downto 0);
	 Switches_in: in std_logic_vector (7 downto 0)
	 );
end TopLevel;

architecture Behavioral of TopLevel is

component PicoCPU is
  port(
    rst: in std_logic;
    clk: in std_logic;
	 FlagOut: out std_logic_vector ( 3 downto 0);
	 output: out std_logic_vector ( 7 downto 0);
	 Switches_in: in std_logic_vector (7 downto 0)
  );
end component;

component Debouncer is
    Port ( rst : in  STD_LOGIC;
			  clk : in  STD_LOGIC;
           ClkBtn_in : in  STD_LOGIC;
           ClkBtn_out : out  STD_LOGIC);
end component;

component VectorToSevenSeg is
port( clk: 			in std_logic;
		InputVector:in  std_logic_vector (7 downto 0);
		AN: 			out std_logic_vector(3 downto 0);
		SevenSeg: 	out std_logic_vector(6 downto 0)
);
end component;

signal ClkBtnout : STD_LOGIC;
signal SystemClk: std_logic;
signal FlagOut: std_logic_vector (3 downto 0);
signal ALUVal: std_logic_vector (7 downto 0);
begin
Debouncer_comp: Debouncer  port map (rst,clk,ClkBttn,ClkBtnout);
PicoCPU_comp: PicoCPU  port map (rst,SystemClk,FlagOut,ALUVal, switches_in);
SevSeg_comp: VectorToSevenSeg port map (clk,ALUVal,AN,SevenSeg);
---------------------------------------------
--      Clock Source
---------------------------------------------
process(clk,ClkBtnout,ClockSrc)begin
	if(ClockSrc='1')then
		SystemClk<= ClkBtnout;
	else
		SystemClk<= clk;
	end if;
end process;

FlagOutput(3 downto 0) <= 	FlagOut;
end Behavioral;

