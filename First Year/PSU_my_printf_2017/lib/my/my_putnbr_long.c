/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** put_nbr
*/

void my_putchar(char c);

int    my_putnbr_long(long nb)
{
	long    mod;

	if (nb < 0)
	{
		my_putchar('-');
		nb = nb * (-1);
	}

	if (nb >= 0)
	{
		if (nb >= 10)
		{
			mod = (nb % 10);
			nb = (nb - mod) / 10;
			my_putnbr_long(nb);
			my_putchar(48 + mod);
		}
		else
			my_putchar(48 + nb % 10);
	}
}
