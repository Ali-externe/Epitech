##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

NAME	=	my_runner

SRCS	=	my_runner.c \
		initial.c \
		initial2.c \
		drawingbackground.c \
		drawingrunner.c \
		infinity.c \
		infinity2.c

OBJS	=	$(SRCS:.c=.o)

all:	compile clean

compile:
	gcc -g3 $(SRCS) -l c_graph_prog -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm $(NAME)
	rm *.o

re:	fclean all

.PHONY: all compile clean fclean re
