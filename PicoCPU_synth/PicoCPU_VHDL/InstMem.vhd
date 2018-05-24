
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
--this part checks which operand is chosen and goes to subprogram according to it
0 =>   "01110000000000",--clear ACC
1 =>   "01111100000001",--load from memory cell 1 into accumulator
2 =>   "00010110000000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, liitmine
3 =>   "01010000010010", --jump to address if 0 aadressiks 18
4 =>   "01111100000001",--load from memory cell 1 into accumulator
5 =>   "00010101000000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, lahutamine
6 =>   "01010000010110", --jump to address if 0
7 =>   "01111100000001",--load from memory cell 1 into accumulator
8 =>   "00010100100000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, or
9 =>   "01010000011010", --jump to address if 0
10 =>  "01111100000001",--load from memory cell 1 into accumulator
11 =>  "00010100010000", -- lahutame akumulaatori vasakpoolse switchi väärtusega, and
12 =>  "01010000100000", --jump to address if 0
13 =>  "01001100000000", --unconditioned jump back to beginning, since all switches are 0 or some other unrecognized format

14 =>  "01111100000001",--load from memory cell 1 into accumulator
15 =>  "00001000000000", --add ACC with 0
16 =>  "01010000000000", --jump back to checking if switches are 0
17 =>  "01001100001110", --tingimusteta jump programmi algusesse

--switchide väärtused viskan akumulaatorisse
18 =>  "01111100000100", -- Acc <-- Mem(4)
19 =>  "00010000000010", --subtract from ACC value that switches are making, result into Acc
20 =>  "10000000000100", -- mem(4) <-- Acc
21 =>  "01001100001110", --jump back to switches checking

22 =>  "01111100000100", -- Acc <-- Mem(4)
23 =>  "00000100000010", --add from ACC value that switches are making, result into Acc
24 =>  "10000000000100", -- mem(4) <-- Acc
25 =>  "01001100001110", --jump back to checking if switches are 0


26 =>  "01111100000010", -- Acc <-- Mem(2) switchide väärtus
27 =>  "10010000000001", -- R0 <-- Acc
28 =>  "01111100000100", -- Acc <-- Mem(4) vana väärtus
29 =>  "00111000000000", --logical AND with ACC and Reg1, result into Acc
30 =>  "10000000000100", -- mem(4) <-- Acc
31 =>  "01001100001110", --jump back to checking if switches are 0

32 =>  "01111100000010", -- Acc <-- Mem(2) switchide väärtus
33 =>  "10010000000001", -- R0 <-- Acc
34 =>  "01111100000100", -- Acc <-- Mem(4) vana väärtus
35 =>  "00111100000000", --logical AND with ACC and Reg1, result into Acc
36 =>  "10000000000100", -- mem(4) <-- Acc
37 =>  "01001100001110", --jump back to checking if switches are 0

others => "00000000000000"
    );
    

begin
  
  data <= my_InstMem(to_integer(unsigned(address)));

  
end architecture behavioral;