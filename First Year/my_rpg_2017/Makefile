##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## make ./my_cook
##

NAME 	=	my_rpg

CPPFLAGS = -I./include

LDFLAGS	=	-L./lib/my/ -lmy

SRC     =	src/init_everything.c	\
		src/load_set.c	\
		src/anim_perso.c	\
		src/collisions.c	\
		src/beforevent.c	\
		src/event.c	\
		src/draw.c	\
		main.c

OBJ     =	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C./lib/my/
	gcc -l c_graph_prog $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	make -C./lib/my/ fclean

ff:	clean
	rm -f $(NAME)
	make -C./lib/my/ fclean

re: fclean all

.PHONY: all compile clean fclean re
