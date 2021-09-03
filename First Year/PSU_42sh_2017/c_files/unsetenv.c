/*
** EPITECH PROJECT, 2017
** unsetenv
** File description:
** unsetenv
*/

#include "my.h"
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char **new_env(char **env, int j)
{
	char **yes;
	int i = 0;
	int a = 0;

	for (; env[i] != NULL; i++);
	yes = malloc(sizeof(char *) * (i));
	yes[i - 1] = NULL;
	for (i = 0, a = 0; env[a] != NULL; a++) {
		if (a != j) {
			yes[i] = env[a];
			i++;
		}
	}
	return (yes);
}

char **unset(char **env, char *str)
{
	if (str == NULL) {
		my_putstr("unsetenv: Too few arguments.\n");
		return (env);
	}
	for (int i = 0; env[i] != NULL; i++) {
		for (int j = 0; env[i][j] == str[j]; j++) {
			if (env[i][j + 1] == '=') {
				env = new_env(env, i);
				return (env);
			}
		}
	}
	return (env);
}
