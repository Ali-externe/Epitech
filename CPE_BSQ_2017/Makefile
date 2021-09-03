##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

NAME	=	bsq

SRCS	=	my_putchar.c \
		my_strlen.c \
		my_put_nbr.c \
		my_height.c \
		filling_square.c \
		algo.c \
		my_bsq.c
OBJS	=	$(SRCS:.c=.o) 

all:	compile

compile:
	gcc $(SRCS) -o bsq

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm bsq
	
re:	clean all

.PHONY: all compile clean fclean re
