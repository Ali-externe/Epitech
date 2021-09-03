/*
** EPITECH PROJECT, 2017
** my_atoi.c
** File description:
** atoi
*/

int my_atoi(char const *str)
{
	int i = 0;
	int n = 0;

	if (str[i] == '-')
		i++;

	while(str[i] >= '0' || str <= '9')
		n = ((str[i] - 48) * 10);
}
