/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** printf
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int my_put_nbr(int nb);
int my_putnbr_long(long nb);
int my_putnbr_base(int nbr, char const *base);
int my_putstr(char *str);

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_strlen(char *str)
{
	int p;
	
	p = 0;
	
	while (str[p]) {
		p = p + 1;
	}
	return (p);
}

int my_printf(char *flag, ...)
{
	va_list arg;
	int i = 0;

	va_start(arg, flag);
	
	while (flag[i] != '\0')	{
		if (flag[i] == '%') {
			switch (flag[i + 1]) {
			case '%':
				my_putchar('%');
				break;
			case ' ':
				my_putchar(' ');
				break;
			case 'd':
			case 'i':
				my_put_nbr(va_arg(arg, int));
				break;
			case 's':
				my_putstr(va_arg(arg, char *));
				break;
			case 'c':
				my_putchar(va_arg(arg, int));
				break;
			case 'o':
				my_putnbr_base(va_arg(arg, int), "01234567");
				break;
			case 'b':
				my_putnbr_base(va_arg(arg, int), "01");
				break;
			case 'x':
				my_putnbr_base(va_arg(arg, int), \
					"0123456789abcdef");
				break;
			case 'X':
				my_putnbr_base(va_arg(arg, int), \
					"0123456789ABCDEF");
				break;
			case 'l':
				my_putnbr_long(va_arg(arg, long));
				break;
			default:
				my_putchar('%');
				my_putchar(flag[i + 1]);
			}
			i = i + 2;
		}
		else
		{
			my_putchar(flag[i]);
			i = i + 1;
		}
	}
	va_end(arg);
	return (0);
}
