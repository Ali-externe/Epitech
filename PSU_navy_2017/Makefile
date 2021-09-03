##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

NAME	=	navy

SRCS	=	matchstick.c \
		bateaux.c \
		my_getnbr.c \
		my_put_nbr.c \
		my_strlen2.c \
		my_strcpy.c \
		my_putstr.c

OBJS	=	$(SRCS:.c=.o)

all:	compile clean

compile:
	gcc -g3 $(SRCS) -o navy

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm navy
	rm *.o

re:	fclean all

.PHONY: all compile clean fclean re
