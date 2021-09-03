##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

all: makelib

makelib:
	make -C generator
	make -C solver

makelibclean:
	make fclean -C generator
	make fclean -C solver

fclean: makelibclean

re: fclean all

.PHONY: all makelib makelibclean clean fclean re
