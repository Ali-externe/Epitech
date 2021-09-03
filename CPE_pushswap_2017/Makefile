##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

NAME	=	libmy.a

SRCS	=	lib/my/my_putchar.c \
		lib/my/my_putnbr.c \
		lib/my/my_atoi.c \
		lib/my/my_pushswap.c

OBJS	=	$(SRCS:.c=.o) 

all:	compile clean

compile:
	gcc -c $(SRCS)
	ar rc libmy.a *.o

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm libmy.a
	rm *.o

re:	fclean all

.PHONY: all compile clean fclean re
