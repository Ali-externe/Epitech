##
## EPITECH PROJECT, 2018
## n4s
## File description:
## Makefile
##

NAME    =       ai

SRCS    =	src/main.c      \
		lib/my/my_putchar.c     \
		lib/my/my_putstr.c      \
		lib/my/parser.c	\
		lib/my/my_strlen.c	\
		lib/my/my_strcp.c	\
		src/check_victory.c

OBJS    =       $(SRCS:.c=.o)

CFLAGS =	-I include -Wall -Werror -Wextra

all:            $(NAME)

$(NAME):$(OBJS)
		gcc -o $(CLFAGS) $(NAME) $(OBJS)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf *.o
		rm -rf ai

re: fclean all

.PHONY: all compile clean fclean re
