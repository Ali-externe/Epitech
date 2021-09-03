##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

NAME	=	libmy.a

SRCS	=	lib/my/my_put_nbr.c \
		lib/my/my_putstr.c \
		lib/my/my_putnbr_base.c \
		lib/my/my_putnbr_long.c \
		lib/my/my_printf.c

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
