/*
** EPITECH PROJECT, 2018
** putstr
** File description:
** putstr.c
*/

#include "my.h"


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
