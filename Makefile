SRC= ft_printf.c ft_utils.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putptr.c ft_puthex.c ft_puthexup.c ft_putuns.c 
OBJ= $(SRC:.c=.o)
NAME= libftprintf.a
CC= cc 
CFLAGS= -Wall  -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all