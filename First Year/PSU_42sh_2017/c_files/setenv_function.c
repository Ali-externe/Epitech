/*
** EPITECH PROJECT, 2017
** setenv_function
** File description:
** setenv_function
*/

#include "my.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char **set_var(char **env, char **parse)
{
	int i = 0;

	for (; parse[i] != NULL; i++);
	if (i > 3) {
		my_putstr("setenv: Too many arguments.\n");
		return (env);
	}
	if (parse[1] == NULL) {
		env_com(env);
		return (env);
	}
	else if (parse[1] != NULL && parse[2] == NULL) {
		env = realloc_2d_parse(env, parse[1]);
	}
	else if (parse[2] != NULL) {
		env = realloc_2d(env, parse[1], parse[2]);
	}
	return (env);
}
