/*
** EPITECH PROJECT, 2018
** Task02
** File description:
** my.h
*/

int my_strcmp1(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0') {
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i = i + 1;
	}
	return (s1[i] - s2[i]);
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
