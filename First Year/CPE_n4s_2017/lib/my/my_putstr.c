/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** 
*/

#include <unistd.h>

int my_strlen(char *str);

int my_putstr(char *str)
{
	write(1, str, my_strlen(str));
	return (0);
}
