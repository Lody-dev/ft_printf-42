#include "lib_printf.h"

void    ft_putchar(const char c) {
        write(1, &c, 1);
}
