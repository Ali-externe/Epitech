/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** strlen
*/
#include "my.h"

int my_strlen(char *str)
{
	int p = 0;

	while(str[p] != '\0') {
		p++;
	}
	return(p);
}
