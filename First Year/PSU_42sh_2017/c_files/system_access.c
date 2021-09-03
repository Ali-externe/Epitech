/*
** EPITECH PROJECT, 2017
** system_access
** File description:
** system_access
*/

#include "my.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char **system_command(char **env)
{
	int i = 0;
	char **path;

	while (env[i] != NULL) {
		if (env[i][0] == 'P' &&
		    env[i][1] == 'A' &&
		    env[i][2] == 'T' &&
		    env[i][3] == 'H') {
			path = char_path(env, i);
			return (path);
		}
		i++;
	}
	if (env[i] == NULL) {
		my_putstr("No PATH line was found in the environnement\n");
		return (NULL);
	}
	return (NULL);
}

char **char_path(char **env, int i)
{
	int j = 0;
	int a = 0;
	int k = 0;
	char **path;

	while (env[i][j] != '\0') {
		if (env[i][j] == ':')
			a++;
		j++;
	}
	path = malloc(sizeof(char *) * (a + 3));
	path[a + 2] = NULL;
	while (k != a + 2) {
		path[k] = malloc(sizeof(char) * j);
		k++;
	}
	return (path_completion(path, env, i));
}

char **path_completion(char **path, char **env, int i)
{
	int j = 0;
	int x = 0;
	int y = 0;

	while (env[i][j] != '=')
		j++;
	j++;
	while (env[i][j] != '\0') {
		if (env[i][j] == ':') {
			j++;
			path[y][x] = '\0';
			x = 0;
			y++;
		}
		path[y][x] = env[i][j];
		j++;
		x++;
	}
	return (path);
}
