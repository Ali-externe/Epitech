/*
** EPITECH PROJECT, 2018
** matchstick.c
** File description:
** matchstick
*/

#include "my.h"

int filling_map(char **map, int *wh)
{
	int x = 1;
	int y = 1;

	while(y != wh[1] + 1) {
		map[y][x] = ' ';
		if(x == wh[0]) {
			map[y][x] = ' ';
			x = 0;
			y++;
		}
		x++;
	}
	return (putsticks(map, wh));
}

int generatemap(char **map, int *wh)
{
	int x = 0;
	int y = 0;

	while(y != (wh[1] + 2)) {
		map[y][x] = '*';
		map[y][wh[0] + 2] = '\0';
		if(x == wh[0] + 1) {
			map[y][x] = '*';
			x = -1;
			y++;
		}
		x++;
	}
	return (filling_map(map, wh));
}

int createmap(int *wh)
{
	int r = 0;

	char **map = malloc(sizeof(char *) * (wh[1] + 2));

	while(r != wh[1] + 2) {
		map[r] = malloc(sizeof(char) * (wh[0] + 2));
		r++;
	}
	return (generatemap(map, wh));
}

int begin(int argc, char **argv)
{
	int *wh = malloc(sizeof(int) * 3);
	int max = my_getnbr(argv[2]);

	wh[1] = my_getnbr(argv[1]);
	wh[0] = get_width(wh);
	wh[2] = max;


	if (wh[1] <= 1) {
		write(2, "minimum 2 lines please.\n", 24);
		return (84);
	}
	else if(wh[1] > 1)
		return (createmap(wh));
}

int main(int argc, char **argv)
{
	if (argc != 3) {
		write(2, "Not enought arguments.\n", 22);
		return (84);
	}
	else
		return (begin(argc, argv));
}
