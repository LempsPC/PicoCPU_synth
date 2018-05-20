
library ieee;
use ieee.std_logic_1164.all;
use IEEE.Numeric_Std.all;

entity InstMem is
  generic (BitWidth: integer;
           InstructionWidth: integer);
  port ( address : in std_logic_vector(BitWidth-1 downto 0);
         data : out std_logic_vector(InstructionWidth-1 downto 0) );
end entity InstMem;

architecture behavioral of InstMem is
  
  type mem is array ( 0 to (2**BitWidth)-1) of std_logic_vector(InstructionWidth-1 downto 0);
  
  constant my_InstMem : mem := (
0 =>   "01110000000000",--clear ACC
1 =>   "00001000000010",--load from memory cell 2 into accumulator
2 =>   "00010110000000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, lahutamine
3 =>   "010100aadresskuhu", --jump to address if 0
4 =>   "00001000000010",--load from memory cell 2 into accumulator
5 =>   "00010101000000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, liitmine
6 =>   "010100aadresskuhu", --jump to address if 0
7 =>   "00001000000010",--load from memory cell 2 into accumulator
8 =>   "00010100100000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, or
9 =>   "010100aadresskuhu", --jump to address if 0
10 =>  "00001000000010",--load from memory cell 2 into accumulator
11 =>  "00010100010000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, and
12 =>  "010100aadresskuhu", --jump to address if 0

others => "00000000000000"
    );
    

begin
  
  data <= my_InstMem(to_integer(unsigned(address)));

  
end architecture behavioral;