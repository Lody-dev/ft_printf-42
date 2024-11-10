#include "lib_printf.h"

void ft_putptr(unsigned long long nb){
      	write(1,"0x",2); 
       	if(nb >= 16){
                ft_puthex(nb / 16);
                nb = nb % 16;
        }
        if (nb < 10)
                ft_putchar(nb + 48);
        else if (nb >= 10 && nb < 16)
                ft_putchar(nb + 87);

}
