/*
** EPITECH PROJECT, 2018
** putstr
** File description:
** putstr.c
*/

#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_putstr(char *str)
{
	int i;
	i = 0;

	while (str[i]) {
		my_putchar(str[i]);
		i = i + 1;
	}
	return (0);
}

void threearg(char *chemin, int pid, int argc, char **argv)
{
	int a = 1;
	
	chemin = argv[2];
	pid = my_getnbr(argv[1]);
	verif(chemin, a, pid);
}
