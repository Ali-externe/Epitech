/*
** EPITECH PROJECT, 2018
** mysh.c
** File description:
** minishell
*/

#include "my.h"

char **my_calloc(char **str, int h, int w)
{
	int i = 0;

	str = malloc(sizeof(char *) * (h + 1));
	while (i != h) {
		str[i] = malloc(sizeof(char) * (w + 1));
		i++;
	}
	str[h + 1] = NULL;
	return (str);
}


int check_next_star(char **map, int a, int b, int *wh)
{
	if (b == wh[0] - 1)
		return (1);
	if (a == wh[1] - 1)
		return (2);
	if (map[a][b + 1] == '*')
		return (1);
	if (map[a + 1][b] == '*')
		return (2);
}

char **left_of_past_r(char **map, int a, int b, int *wh)
{
	srand(getpid());
	int i = 0;
	int s = 0;

	b = b + 1;
	while (b < (wh[0] - 1)) {
		s = rand() % 2;
		if (s == 0) {
			b++;
			map[a][b] = '*';
		}
		if (map[a + 1][b - 1] != '*' && map[a + 2][b] != '*'
		&& s == 1 && map[a + 2][b] == 'X') {
			a++;
			map[a][b] = '*';
		}
		else
			s = 0;
	}
	return (map);
}

char **left_of_past_l(char **map, int a, int b, int *wh)
{
	srand(getpid());
	int i = 0;
	int s = 0;

	b = b - 1;
	while (b > 0) {
		s = rand() % 2;
		if (s == 0) {
			b--;
			map[a][b] = '*';
		}
		if ((a < (wh[1] - 2)) && map[a + 1][b] == 'X' && s == 1) {
			a++;
			map[a][b] = '*';
		}
		else
			s = 0;
	}
	return (map);
}

char **create_bad_path(char **map, int a, int b, int *wh)
{
	if (map[a][b + 1] == 'X' && (a < (wh[1] - 2))
	&& a > 1 && map[a - 1][b + 1] == 'X') {
		map[a][b + 1] = '*';
		map = left_of_past_r(map, a, b, wh);
	}
	if ((a > 1) && map[a][b - 1] == 'X' &&
	(a < (wh[1] - 2)) && a > 1 && map[a - 1][b - 1] == 'X') {
		map[a][b - 1] = '*';
		map = left_of_past_l(map, a, b, wh);
	}
	return (map);
}
