/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** Shows a string
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
	int a = 0;

	while (str[a] != '\0') {
		my_putchar(str[a]);
		a++;
	}
	return (0);
}
