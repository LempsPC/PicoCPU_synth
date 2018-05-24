 
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
 
entity TopLevel is
	port(
	 rst: in std_logic;
    clk: in std_logic;
	 ClkBttn: in std_logic;
	 ClockSrc: in std_logic;
	 clk_out: out std_logic;
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

component debouncer2 is

    Port ( clk : in STD_LOGIC;
           input : in STD_LOGIC;
           result : out STD_LOGIC);
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
signal ALUVal, debounced_switches: std_logic_vector (7 downto 0);
begin
Debouncer_comp: Debouncer  port map (rst,clk,ClkBttn,ClkBtnout);

Debouncer_generator: for i in 0 to 7 generate
	Debouncer: Debouncer2 port map(clk, Switches_in(i), debounced_switches(i));
end generate;

--Debouncer_0: Debouncer2 port map(clk, Switches_in(0), debounced_switches(0));
--Debouncer_1: Debouncer2 port map(clk, Switches_in(1), debounced_switches(1));
--Debouncer_2: Debouncer2 port map(clk, Switches_in(2), debounced_switches(2));
--Debouncer_3: Debouncer2 port map(clk, Switches_in(3), debounced_switches(3));
--Debouncer_4: Debouncer2 port map(clk, Switches_in(4), debounced_switches(4));
--Debouncer_5: Debouncer2 port map(clk, Switches_in(5), debounced_switches(5));
--Debouncer_6: Debouncer2 port map(clk, Switches_in(6), debounced_switches(6));
--Debouncer_7: Debouncer2 port map(clk, Switches_in(7), debounced_switches(7));

PicoCPU_comp: PicoCPU  port map (rst,SystemClk,FlagOut,ALUVal, debounced_switches);
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
clk_out <= SystemClk;
end Behavioral;

