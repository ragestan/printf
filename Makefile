NAME = libftprintf.a
RM = rm -f
SRC 	= ft_printf.c\
			ft_putchar.c\
			ft_putnbr_x.c\
			ft_putnbr_xx.c\
			ft_putnbr_u.c\
			ft_putnbr.c\
			ft_putstr.c\

FILIO = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):		$(FILIO)
		ar -rc $(NAME) $(FILIO)

clean:
		$(RM) $(FILIO)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
