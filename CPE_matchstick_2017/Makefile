##
## EPITECH PROJECT, 2018
## Makefile
## File description:
##
##

NAME	=	matchstick

SRCS	=	my_getnbr.c \
		my_put_nbr.c \
		my_strlen.c \
		my_putstr.c \
		my_putchar.c \
		matchstickbot2.c \
		get_next_line.c \
		matchstickbot.c \
		matchstick3.c \
		matchstick.c \

OBJS	=	$(SRCS:.c=.o)

all:	compile clean

compile:
	gcc -L. $(SRCS) -L. -o $(NAME)
clean:
	rm -rf $(OBJS)

fclean:	clean
	rm $(NAME)
	rm *.o

re:	fclean all

.PHONY: all compile clean fclean re
