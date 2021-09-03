/*
** EPITECH PROJECT, 2018
** strcmp
** File description:
** my_strcmp.c
*/
#include "../my.h"

int my_strcmp(char *s1, char *s2)
{
	int i;
	int a = 0;

	i = my_strlen(s1);
	while ((s1[i] != (i + 4)) && s2[a] != '\0') {
		if (s1[i] != s2[a])
			return (s1[i] - s2[a]);
		i = i + 1;
		a = a + 1;
	}
	return (s1[i] - s2[a]);
}
