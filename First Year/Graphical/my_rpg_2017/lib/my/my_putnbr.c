/*
** EPITECH PROJECT, 2017
** my_putnbr
** File description:
** Shows numbers
*/

#include <unistd.h>

void my_putchar(char c);

int my_putnbr(int i)
{
	int mod;

	if (i < 0){
		my_putchar('-');
		i = i * (-1);
	}
	if (i >= 0){
		if (i >= 10){
			mod = (i % 10);
			i = (i - mod) / 10;
			my_putnbr(i);
			my_putchar(48 + mod);
		}
		else
			my_putchar(48 + i % 10);
	}
}
