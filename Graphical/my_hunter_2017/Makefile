##
## EPITECH PROJECT, 2018
## Makefile
## File description:
##
##

NAME	=	my_hunter

SRCS	=	my_hunter.c \
		setting_game.c \
		my_putstr.c \
		setting_game2.c \
		initial.c \
		initial2.c \
		drawing.c

OBJS	=	$(SRCS:.c=.o)

all:	compile clean

compile:
	gcc -g3 $(SRCS) -l c_graph_prog -o my_hunter

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm my_hunter
	rm *.o

re:	fclean all

.PHONY: all compile clean fclean re
