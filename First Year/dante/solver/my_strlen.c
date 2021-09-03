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

char **check_dead_end(char **map, int a, int b, int *wh)
{
	int i = 0;

	if ((a == 0) && (b == 0))
		return (map);
	if ((a == (wh[1])) && (b == (wh[0] - 2)))
		return (map);
	if ((a < (wh[1])) && map[a + 1][b] == '*')
		i++;
	if ((b < (wh[0])) && map[a][b + 1] == '*')
		i++;
	if ((a > 0) && map[a - 1][b] == '*')
		i++;
	if ((b > 0) && map[a][b - 1] == '*')
		i++;
	if (i == 1)
		map[a][b] = '@';
	return (map);
}

char **check_pos(char **map, int *wh , int a, int b)
{
	char *pb = "no solution found";

	while (a > 0 || b > 0) {
		if ((a > 0) && map[a - 1][b] == '*') {
			a--;
			map[a][b] = 'o';
		}
		else if ((b > 0) && map[a][b - 1] == '*') {
			b--;
			map[a][b] = 'o';
		}
		else if ((b < (wh[0])) && map[a][b + 1] == '*') {
			b++;
			map[a][b] = 'o';
		}
		else if ((a < (wh[1])) && map[a + 1][b] == '*') {
			a++;
			map[a][b] = 'o';
		}
		else {
			map[0] = "no solution found";
			return (map);
			break;
		}
	}
	return (map);
}

char **best_path(char **map, int *wh)
{
	int a = wh[1];
	int b = (wh[0] - 2);

	map[a][b] = 'o';
	map = check_pos(map, wh, a, b);

	return (map);
}

char **solve(char **map)
{
	int a = 0;
	int b = 0;
	int *wh = malloc(sizeof(int) * 2);

	wh[0] = my_strlen(map[0]);
	wh[1] = (my_height(map) - 1);
	while ((a != (wh[1])) || (b != (wh[0] - 1))) {
		if (map[a][b] == '*')
			map = check_dead_end(map, a, b, wh);
		if (b == (wh[0] - 1)) {
			b = -1;
			a++;
		}
		b++;
	}
	return (map);
}
