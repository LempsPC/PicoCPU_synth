
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
3 =>   "01010000010000", --jump to address if 0 aadressiks 16
4 =>   "00001000000010",--load from memory cell 2 into accumulator
5 =>   "00010101000000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, liitmine
6 =>   "01010000010100", --jump to address if 0
7 =>   "00001000000010",--load from memory cell 2 into accumulator
8 =>   "00010100100000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, or
9 =>   "01010000011000", --jump to address if 0
10 =>  "00001000000010",--load from memory cell 2 into accumulator
11 =>  "00010100010000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, and
12 =>  "01010000011100", --jump to address if 0
13 =>  "01001100000000", --jump back to beginning
--switchide väärtused viskan akumulaatorisse
16 =>  "10001100000001", -- Acc <-- Reg0
17 =>  "00010000000001", --subtract from ACC value that switches are making, result into Acc
18 =>  "10000000000001", -- Reg0 <-- Acc
19 =>  "01001100000000", --jump back to beginning

20 =>  "10001100000001", -- Acc <-- Reg0
21 =>  "00000100000001", --add from ACC value that switches are making, result into Acc
22 =>  "10000000000001", -- Reg0 <-- Acc
23 =>  "01001100000000", --jump back to beginning


24 =>  "10001100000001", -- Acc <-- Reg0
25 =>  "00111000000001", --logical AND from ACC value that switches are making, result into Acc
26 =>  "10000000000001", -- Reg0 <-- Acc
27 =>  "01001100000000", --jump back to beginning

28 =>  "10001100000001", -- Acc <-- Reg0
29 =>  "00111000000001", --logical AND from ACC value that switches are making, result into Acc
30 =>  "10000000000001", -- Reg0 <-- Acc
31 =>  "01001100000000", --jump back to beginning

others => "00000000000000"
    );
    

begin
  
  data <= my_InstMem(to_integer(unsigned(address)));

  
end architecture behavioral;