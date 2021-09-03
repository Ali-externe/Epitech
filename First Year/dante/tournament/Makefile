##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

all: makelib

makelib:
	make -C ..
	cp ./../generator/generator .
	cp ./../solver/solver .

makelibclean:
	rm solver
	rm generator

fclean: makelibclean

re: fclean all
