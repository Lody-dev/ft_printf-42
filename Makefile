NAME = libftprintf.a  
CC = cc  
CFLAGS = -Wall -Wextra -Werror  


DEBUG_FLAGS = -g -Wall -Wextra -Werror


SRC = ft_printf.c\
      ft_putstr.c\
      ft_putnbr.c\
      ft_putunbr.c\
      ft_putchar.c\
      ft_puthex.c\
      ft_putbighex.c\
      ft_putptr.c\
	main.c

OBJ = $(SRC:.c=.o)  


all: $(NAME)


$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)


$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


gdb: $(OBJ)
	$(CC) $(OBJ) $(DEBUG_FLAGS) -o $(NAME)_gdb
	@$(MAKE) clean


clean:
	@rm -f $(OBJ) 

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re gdb

