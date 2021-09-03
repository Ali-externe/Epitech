/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** strlen
*/

#include "my.h"

int my_strlen(char *str)
{
	int p = 1;
	int a = 0;

	while(str[p] != '*') {
		if(str[p] == '|')
			a++;
		p++;
	}
	return (a);
}

int my_strlen2(char **str, int *wh)
{
	int x = 0;
	int y = 1;
	int s = 0;

	while(y != wh[1] + 2) {
		if(str[y][x] == '|')
			s++;
		if(str[y][x] == '\0') {
			x = -1;
			y++;
		}
		x++;
	}
	return (s);
}

int my_strlen3(char **map, int line)
{
	int x = 0;
	int a = 0;

	while(map[line][x] != '\0') {
		if(map[line][x] == '|') {
			a++;
		}
		
		x++;
	}
	return (a);
}

int my_strlen4(char **map, int line, int *wh)
{
	int a = wh[0] + 1;

	while(map[line][a] != '|') {
		a--;
	}
	return (a);
}
