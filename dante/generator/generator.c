/*
** EPITECH PROJECT, 2018
** mysh.c
** File description:
** minishell
*/

#include "my.h"

int main(int argc, char **argv)
{
	int h = 0;
	int w = 0;

	if (argc == 3) {
		w = my_getnbr(argv[1]);
		h = my_getnbr(argv[2]);
		create_base_map(h, w);
	}
	if (argc == 4 && argv[3][0] == 'p') {
		w = my_getnbr(argv[1]);
		h = my_getnbr(argv[2]);
		perfect_map(w, h);
	}
	else
		return (84);
}

char **make_path(char **map, int w, int h)
{
	srand(getpid());
	int a = 0;
	int b = 0;
	int s= 0;

	while (a != (h - 1)) {
		s = rand() % (w - 2);
		if (a % 2 == 1) {
			map[a][s] = '*';
		}
		a++;
	}
	return (map);
}

char **make_doors_perfect(int h, int w, char **map)
{
	map[0][0] = '*';
	map[h - 1][w - 1] = '*';
	map = make_path(map, w, h);
	for (int f = 0; f != h; f++) {
		my_putstr(map[f]);
		if (f != (h - 1))
			my_putstr("\n");
	}
}

char **perfect_map(int h, int w)
{
	int a = 0;
	int b = 0;
	int d = 0;

	char **map = my_calloc(map, h, w);
	while (a != h) {
		if (a % 2 == 0)
			map[a][b] = '*';
		if (a % 2 == 1)
			map[a][b] = 'X';
		b++;
		if (b == w) {
			map[a][w] = '\0';
			b = 0;
			a++;
		}
	}
	make_doors_perfect(h, w, map);
}

char **bad_path(char **map, int h, int w, int *wh)
{
	srand(getpid());
	int a = 0;
	int b = 0;
	int s = 0;

	while (a != (wh[1] - 1) && b != (wh[0] - 1)) {
		s = rand() % 2;
		if (s == 1)
			map = create_bad_path(map, a, b, wh);
		if ((check_next_star(map, a, b, wh) == 1))
			b++;
		if ((check_next_star(map, a, b, wh) == 2))
			a++;
	}
}
