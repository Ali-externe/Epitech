/*
** EPITECH PROJECT, 2017
** conversion
** File description:
** conversion
*/

#include "my.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char **ls_conv(char **path, char **parse)
{
	int i = 0;
	int j = 0;
	char *copy;
	int k = 0;

	for (; path[j] != NULL; j++) {
		while (i != my_strlen(path[j]))
			i++;
		copy = path[j];
		path[j] = malloc(sizeof(char) * (i + my_strlen(parse[0]) + 2));
		for (; k != i; k++)
			path[j][k] = copy[k];
		path[j][i] = '/';
		i++;
		for (int x = 0; parse[0][x] != '\0'; x++, i++)
			path[j][i] = parse[0][x];
		path[j][i] = '\0';
		k = 0;
		i = 0;
	}
	return (path);
}
