##
## EPITECH PROJECT, 2018
## Makefile
## File description:
##
##

NAME	=	solver

SRCS	=	solver.c	\
		my_strlen.c

OBJS	=	$(SRCS:.c=.o)

all:	compile clean

compile:
	gcc $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all compile clean fclean re
