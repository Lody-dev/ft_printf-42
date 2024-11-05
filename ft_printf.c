#include "lib_printf.h"

int ft_printf(const char *format, ...){
int i = 0;

va_list args;
	
va_start(args, format);
	
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
				ft_putstr(va_arg(args,char *));
			else if (format [i] == 'd')
				ft_putnbr(va_arg (args,int));
			else if (format [i] == 'c')
				ft_putchar(va_arg(args,int));
			else if (format [i] == '%')
				write(1,"%",1);
		}
		else
			write(1, &format[i], 1);
		i++;
		
	}
va_end (args);
return (i);
}
