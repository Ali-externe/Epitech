/*
** EPITECH PROJECT, 2018
**
** File description:
** 
*/

int my_swap1(char *a, char *b)
{
	char i = *a;

	*a = *b;
	*b = i;
}

char *my_revstr(char *str)
{
	int i = 0;
	int j = 1;

	while (str[i] != 0)
		i = i + 1;
	while (j <= i / 2) {
		my_swap1(&str[j - 1], &str[i - j]);
		j = j + 1;
	}
	return (str);
}
