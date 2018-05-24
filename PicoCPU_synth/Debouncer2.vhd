----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:25:28 05/22/2018 
-- Design Name: 
-- Module Name:    Debouncer2 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity debouncer2 is
    generic (
        counter_size : integer := 19); -- counter size: 19 bits gives around 10.5ms of delay with 50Mhz of clock, zedboard has 100MHZ of clock
    Port ( clk : in STD_LOGIC;
           input : in STD_LOGIC;
           result : out STD_LOGIC);
end debouncer2;

architecture Behavioral of debouncer2 is

signal flipflops : std_logic_vector(1 downto 0); -- input fip-flops
signal counter_set : std_logic; --sync reset to 0
signal counter_out : std_logic_vector (counter_size downto 0) := (others => '0');

begin
process(clk)
begin
    if(rising_edge(clk)) then
        flipflops(0) <= input;
        flipflops(1) <= flipflops(0);
        if(counter_set = '1') then
            counter_out <= (others => '0');
        elsif(counter_out(counter_size) = '0') then
            counter_out <= counter_out + 1;
        else
            result <= flipflops(1);
        end if;
    end if;
end process;

end Behavioral;
