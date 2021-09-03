/*
** EPITECH PROJECT, 2017
** cd_function
** File description:
** cd_function
*/

#include "my.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void move(char *s, char **env, char **parse)
{
	int k = 0;

	for (; parse[k] != NULL; k++);
	if (k > 3) {
		my_putstr("cd: too many arguments\n");
	}
	if (k == 3) {
		my_putstr("cd: string not in pwd: ");
		my_putstr(parse[1]);
		my_putchar('\n');
	}
	if (parse[1] == NULL) {
		chdir(home_sweet_home(env));
		return;
	}
	if (old_folder(s, env, parse) == -1)
		return;
	move_2(parse[1]);
}

char *home_sweet_home(char **env)
{
	char *home;
	int i = 0;
	int line;

	while (env[i] != NULL) {
		if (env[i][0] == 'H' && env[i][1] == 'O' &&
		    env[i][2] == 'M' && env[i][3] == 'E')
			line = i;
		i++;
	}
	i = 0;
	while (env[line][i] != '\0')
		i++;
	home = malloc(sizeof(char) * i);
	i = 0;
	return (home_reached(home, env, line));
}

char *home_reached(char *home, char **env, int line)
{
	int i = 0;
	int j = 0;

	while (env[line][i] != '=')
		i++;
	i++;
	while (env[line][i] != '\0') {
		home[j] = env[line][i];
		i++;
		j++;
	}
	return (home);
}

int old_folder(char *s, char **env, char **parse)
{
	(void)s;
	if (compare(parse[1], "-")) {
		chdir(old_pwd(env));
		return (-1);
	}
	return (1);
}

char *old_pwd(char **env)
{
	char *old;
	int i = 0;
	int line;

	while (env[i] != NULL) {
		if (env[i][0] == 'O' && env[i][1] == 'L' &&
		    env[i][2] == 'D' && env[i][3] == 'P')
			line = i;
		i++;
	}
	i = 0;
	while (env[line][i] != '\0')
		i++;
	old = malloc(sizeof(char) * i);
	i = 0;
	return (old_reached(old, env, line));
}
