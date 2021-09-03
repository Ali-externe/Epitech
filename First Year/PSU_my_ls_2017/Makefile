##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

NAME	=	my_ls

SRCS	=	lib/my/my_putchar.c 	\
		lib/my/my_putstr.c 	\
		lib/my/my_put_nbr.c 	\
		lib/my/my_strncmp.c	\
		lib/my/info_file.c 	\
		lib/my/my_ls.c

OBJS	=	$(SRCS:.c=.o)


all:	compile

compile:
	gcc $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	rm -rf $(NAME)


fclean:	clean

re:	fclean all

.PHONY: all compile clean fclean re
