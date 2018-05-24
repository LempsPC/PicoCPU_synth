


library IEEE;
use IEEE.std_logic_1164.all;
USE ieee.std_logic_unsigned.ALL; 

entity PicoCPUTestBench is
end PicoCPUTestBench;

architecture Bench of PicoCPUTestBench is

component TopLevel is
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
end component;

signal reset, clock, clock_button, clock_source, clk_out : std_logic := '0';
signal AN, Flag_out : std_logic_vector (3 downto 0);
signal sevenseg : std_logic_vector (6 downto 0);
signal switches_in : std_logic_vector(7 downto 0);

begin

UUT: TopLevel
Port map(rst => reset,
			clk => clock,
			ClkBttn => clock_button,
			ClockSrc => clock_source,
			clk_out => clk_out,
			AN => AN,
			SevenSeg => sevenseg,
			Switches_in => switches_in);

clock <= not clock after 10ns;

Stimuli: process
begin
	switches_in <= "00010000";
	wait for 10000ns;
	switches_in <= "00010010";
	wait;
end process;

end Bench;

