/*
** EPITECH PROJECT, 2017
** filling_square.c
** File description:
** filling
*/

#include <stdlib.h>
#include "my.h"
#include "struct.h"

void filling_x(char *buffer, int bigger, pos_b *position)
{
	int y = 0;
	int u = 1;
	int p = 0;

	while(buffer[y] != 'x')
		y = y + 1;
	while(p != bigger) {
		while( u != bigger) {
			buffer[y - u] = 'x';
			u = u + 1;
		}
		u = 0;
		y = y - position->h - 1;
		p = p + 1;
	}
	affichage(buffer);
	free(position);
}
