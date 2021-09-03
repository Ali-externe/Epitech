/*
** EPITECH PROJECT, 2018
** GNL
** File description:
** 
*/

#include <unistd.h>
#include "get_next_line.h"
#include <stdlib.h>
// #include <criterion/criterion.h>
// #include <criterion/redirect.h>
#include <fcntl.h>
#include <stdio.h>

int my_strlen_false(char *result)
{
	int i = 0;

	if (result == NULL)
		return (0);
	while (result[i] != '\0')
		i++;
	return (i);
}

char *re_alloc(char *result, int size)
{
	char *new_res;
	int i = 0;

	new_res = malloc(sizeof(char) * (size + READ_SIZE));
	if (result != NULL) {
		while (result[i] != '\0') {
			new_res[i] = result[i];
			i++;
		}
		new_res[i] = '\0';
	}
	free(result);
	return (new_res);
}

char *get_next_line(int fd)
{
	char *buffer = malloc(sizeof(char) * READ_SIZE);
	char *line = NULL;
	int i = 0;
	int j = 0;
	int n = 0;
	int nb = 0;

	while ((nb = read(fd, buffer, READ_SIZE)) != 0) {
		line = re_alloc(line, my_strlen_false(line));
		i = 0;
		for (; i != nb; i++)
			if (buffer[i] == '\n')
				n++;
		i = 0;
		if (n > 0) {
			for (; buffer[i] != '\n'; i++, j++)
				line[j] = buffer[i];
			n = 0;
			j = 0;
			return (line);
		}
		else
			for (; i != nb; i++, j++)
				line[j] = buffer[i];
		buffer = malloc(sizeof(char) * READ_SIZE);
	}
	return (line);
}
