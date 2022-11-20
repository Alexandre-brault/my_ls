##
## EPITECH PROJECT, 2022
## makefile
## File description:
## C
##


#include "my.h"

SRC	=	my_ls.c		\
		my_putstr.c		\
		my_putchar.c


OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

all: 	$(NAME)


$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all
