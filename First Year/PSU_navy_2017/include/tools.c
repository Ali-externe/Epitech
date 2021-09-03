/*
** EPITECH PROJECT, 2018
** navy
** File description:
** PSU 2018
*/

#include <unistd.h>
#include "navy.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_put_nbr(int nb)
{
	int debut;
	int fin;

	if (nb < 0)
	{
		my_putchar('-');
		my_put_nbr(-nb);
	}
	else
	{
		fin = nb % 10;
		debut = nb / 10;
		if (debut != 0)
			my_put_nbr(debut);
		my_putchar(fin + '0');
	}
	return ;
}

int my_getnbr(char *str)
{
	int i = 0;
	int nb = 0;

	while (str[i] != '\0') {
		if (str[i] >= 48 && str[i] <= 57)
			nb = nb * 10 + (str[i] - 48);
		i = i + 1;
	}

	return (nb);
}
