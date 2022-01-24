NAME	= libftprintf.a
CC		= gcc
CFLAG	= -Wall -Wextra -Werror
AR		= ar -rcs
RM		= rm -f

HD		= ft_printf.h
SRC		= ft_printf.c
OBJ		= $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) $(HD)
	$(AR) $(NAME) $(OBJ)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re