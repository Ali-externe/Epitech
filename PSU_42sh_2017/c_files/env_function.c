/*
** EPITECH PROJECT, 2017
** env_function
** File description:
** env_function
*/

#include "my.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void env_com(char **env)
{
	int i = 0;

	while (env[i] != NULL) {
		my_putstr(env[i]);
		i++;
		my_putchar('\n');
	}
}
