/*
** EPITECH PROJECT, 2017
** 
** File description:
** 
*/

void my_putchar(char c);

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
