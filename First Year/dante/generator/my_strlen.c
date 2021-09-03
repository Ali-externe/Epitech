/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** strlen
*/
#include "my.h"

int my_strlen(char *str)
{
	int p = 0;

	while(str[p] != '\0') {
		p++;
	}
	return(p);
}

void my_putstr(char *str)
{
	write(1, str, my_strlen(str));
}

char **generate_path(int h, int w, char **map)
{
	srand(getpid());
	int a = 0;
	int b = 0;
	int s = 0;
	int *wh = malloc(sizeof(int) * 2);

	wh[0] = w;
	wh[1] = h;
	while (a != (h - 1) && b != (w - 1)) {
		s = rand() % 2;
		if (s == 1)
			b++;
		if (s == 0)
			a++;
		map[a][b] = '*';
		if (b == (w - 1) && (a < (h - 1)))
			while (a != (h - 1)) {
				a++;
				map[a][b] = '*';
			}
		if (a == (h - 1) && (b < (w - 1)))
			while (b != (w - 1)) {
				b++;
				map[a][b] = '*';
			}
	}
	bad_path(map, h, w, wh);
	map[h - 1][w] = '\0';
	for (int f = 0; f != h; f++) {
		my_putstr(map[f]);
		if (f != (h - 1))
			my_putstr("\n");
	}
}

char **make_doors(int h, int w, char **map)
{
	map[0][0] = '*';
	map[h - 1][w - 1] = '*';
	map = generate_path(h, w, map);
}

char **create_base_map(int h, int w)
{
	int a = 0;
	int b = 0;
	int d = 0;

	char **map = my_calloc(map, h, w);
	while (a != h) {
		map[a][b] = 'X';
		b++;
		if (b == w) {
			map[a][w] = '\0';
			b = 0;
			a++;
		}
	}
	make_doors(h, w, map);
}
