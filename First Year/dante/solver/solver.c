/*
** EPITECH PROJECT, 2018
** mysh.c
** File description:
** minishell
*/

#include "my.h"

char *my_strcpy(char *str)
{
	char *newstr;
	int a = my_strlen(str);
	int i = 0;

	newstr = malloc(sizeof(char) * (a + 1));
	while(i != a) {
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

void my_putstr(char *str)
{
	write(1, str, my_strlen(str));
}

int main(int argc, char **argv)
{
	char **map = malloc(sizeof(char *) * 100);
	FILE *fd = fopen(argv[1], "r");
	int *wh = malloc(sizeof(int) * 2);
	int max = 0;
	int i = 0;
	size_t size = 0;
	char *s;

	if (argc != 2)
		return (84);
	if (fd == NULL)
		return (84);
	for (; getline(&s, &size, fd) != -1; i++)
		map[i] = my_strcpy(s);
	wh[0] = my_strlen(map[0]);
	wh[1] = (my_height(map) - 1);
	max = wh[0];
	map[i] = NULL;
	if (wh[1] >= wh[0])
		max = wh[1];
	for (int i = 0; i != max; i++)
		map = solve(map);
	map = best_path(map, wh);
	if (map[0][0] == 'n') {
		my_putstr("no solution found\n");
		return (84);
	}
	map = finale(map, wh);
	for (int j = 0; map[j] != NULL; j++)
		my_putstr(map[j]);
}

char **finale(char **map, int *wh)
{
	int a = 0;
	int b = 0;

	while ((a != (wh[1])) || (b != (wh[0] - 1))) {
		if (map[a][b] == '@')
			map[a][b] = '*';
		if (b == (wh[0] - 1)) {
			b = -1;
			a++;
		}
		b++;
	}
	return (map);
}

int my_height(char **str)
{
	int p = 0;
	int i = 0;

	while (str[i]) {
		p++;
		i++;
	}
	return (p);
}
