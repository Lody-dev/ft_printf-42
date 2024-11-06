#include "lib_printf.h"

void	ft_putbighex(unsigned int nb) {
	if(nb >= 16){
		ft_putbighex(nb / 16);
		nb = nb % 16;
	}
	if (nb < 10) 
		ft_putchar(nb + 48);
	else if (nb >= 10 && nb < 16)
		ft_putchar(nb + 55);
}