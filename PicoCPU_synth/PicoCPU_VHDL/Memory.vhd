library IEEE;
use IEEE.STD_LOGIC_1164.all;
use IEEE.Numeric_Std.all;

entity Mem is 
  generic (BitWidth: integer);
  port ( RdAddress: in std_logic_vector (BitWidth-1 downto 0);
         Data_in: in std_logic_vector (BitWidth-1 downto 0);
			Switches_in: in std_logic_vector (BitWidth-1 downto 0);
			WrtAddress: in std_logic_vector (BitWidth-1 downto 0);
         clk: in std_logic;
         RW: in std_logic;
         rst: in std_logic;
			Debug_Out: out std_logic_vector (BitWidth-1 downto 0);
         Data_Out: out std_logic_vector (BitWidth-1 downto 0)
    );
end Mem;

architecture beh of Mem is

  type Mem_type is array (0 to (2**BitWidth)-1) of std_logic_vector(BitWidth-1 downto 0);
   signal Mem : Mem_type;
   
begin  

 MemProcess: process(clk,rst) is

  begin
    if rst = '1' then 
      Mem<= ((others=> (others=>'0')));
    elsif rising_edge(clk) then
      if RW = '1' then
        Mem(to_integer(unsigned(WrtAddress(7 downto 0)))) <= Data_in;
      end if;
		Mem(1) <= (Switches_in(7 downto 4) & "0000"); --commands 4-bit
		Mem(2) <= "0000" & (Switches_in( 3 downto 0)); --operands
		Mem(0) <= "00000000"; --let's put 5 in mem(0)
		
    end if;
  end process MemProcess;

  Debug_out <= Mem(4);
  Data_Out <= Mem(to_integer(unsigned(RdAddress(7 downto 0))));
end beh;