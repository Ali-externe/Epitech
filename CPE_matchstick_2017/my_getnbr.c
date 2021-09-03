/*
** EPITECH PROJECT, 2017
** Task02
** File description:
** my.h
*/

int my_strcmp1(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}

int my_getnbr(char *str)
{
	long int integer;
	int i;
	int sign;

	sign = 1;
	i = 0;
	integer = 0;
	if (my_strcmp1(str, "-2147483648") == 0)
		return (-2147483648);
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * - 1;
		i = i + 1;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		integer = integer * 10 + (str[i] - '0');
		i = i + 1;
	}
	if (integer < -2147483648 || integer > 2147483647)
		return (0);
	return (integer * sign);
}
