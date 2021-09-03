/*
** EPITECH PROJECT, 2018
** path
** File description:
** 
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "n4s.h"

int count(char *str, int a)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == ':')
			a++;
		i++;
	}
	return (a + 1);
}

char **my_parser(char *lin, int a)
{
	char **path = NULL;
	int i = 0;
	int b = 0;
	int c = 0;

	path = malloc(sizeof(char *) * (a + 1));
	path[a] = NULL;
	for (int z = 0; z != a; z++)
		path[z] = malloc(sizeof(char) * 40);
	while (lin[i] != '\0') {
		if (lin[i] != ':') {
			path[b][c] = lin[i];
			c++;
			if (lin[i + 1] == ':') {
				path[b][c + 1] = '\0';
				b++;
				c = 0;
			}
		}
		path[b][c + 1] = '\0';
		i++;
	}
	return (path);
}

char **pars(char *line)
{
	char **parser;
	int a = 0;
	
	a = count(line, a);
	parser = my_parser(line, a);
	return (parser);
}
