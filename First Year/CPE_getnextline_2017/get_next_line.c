/*
** EPITECH PROJECT, 2017
** getnextline.c
** File description:
** putchar
*/

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char let;
	int i = 0;
	char *buffer = malloc(sizeof(char) * READ_SIZE + 1);
	int nb = 1;

	while (i < READ_SIZE) {
		nb = read(fd, &let, 1);
		if (let == '\n') {
			break;
		}
		if (nb == 0)
			break;
		buffer[i] = let;
		i++;
	}
	while (let != 10 || i > READ_SIZE) {
		if (nb == 0)
			break;
		nb = read(fd, &let, 1);
	}
	return (buffer);
}
