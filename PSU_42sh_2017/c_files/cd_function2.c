/*
** EPITECH PROJECT, 2017
** cd_function2
** File description:
** cd_function2
*/

#include "my.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *old_reached(char *old, char **env, int line)
{
	int i = 0;
	int j = 0;

	while (env[line][i] != '=')
		i++;
	i++;
	while (env[line][i] != '\0') {
		old[j] = env[line][i];
		i++;
		j++;
	}
	return (old);
}

void move_2(char *path)
{
	int ret_val;

	ret_val = chdir(path);
	if (ret_val == -1) {
		my_putstr("No such file or directory : ");
		my_putstr(path);
		my_putchar('\n');
	}
}
