##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME    =       42sh

SRC	=	c_files/main.c	\
		c_files/cd_function.c	\
		c_files/cd_function2.c	\
		c_files/env_function.c	\
		c_files/exe_functions.c	\
		c_files/setenv_function.c	\
		c_files/system_access.c	\
		c_files/conversion.c	\
		c_files/new_commands.c	\
		c_files/unsetenv.c	\
		lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_strlen.c	\
		lib/my/my_parser.c	\
		lib/my/parse_command.c	\
		lib/my/parse_command_next.c	\
		lib/my/my_strcpy.c	\
		lib/my/my_strcmp.c	\
		lib/my/realloc_2d.c	\
		lib/my/clean_str.c	\
		lib/my/get_next_line.c

OBJS	=	$(SRC:.c=.o)

CFLAGS	=	-I include -Wall -Wextra -Werror -g3

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	rm -rf src/*~
	rm -rf src/*#

fclean:
	rm -rf $(NAME)
	rm -rf src/*~
	rm -rf src/*#

re: fclean all clean

.PHONY: all clean fclean re
