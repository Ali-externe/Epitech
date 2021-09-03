##
## EPITECH PROJECT, 2018
## Makefile
## File description:
##
##

NAME	=	generator

SRCS	=	generator.c	\
		my_getnbr.c	\
		my_strlen.c	\
		my_calloc.c

OBJS	=	$(SRCS:.c=.o)

all:	compile clean

compile:
	gcc -g3 $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all compile clean fclean re
