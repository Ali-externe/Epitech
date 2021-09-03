/*
** EPITECH PROJECT, 2017
** commands
** File description:
** commands
*/

#include "my.h"
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char **commands(char *s, char **env, char **parse)
{
	int i = 0;

	i = next_commands(s, env, parse);
	i = i + next_next_commands(s, env, parse);
	if (compare(parse[0], "cd"))
		move(s, env, parse);
	else if (compare(parse[0], "setenv"))
		env = set_var(env, parse);
	else if (compare(parse[0], "unsetenv"))
		env = unset(env, parse[1]);
	else if (s == NULL)
		exit(0);
	else if (i >= 1) {
	}
	else {
		exe_ls(system_command(env), s, parse, env);
	}
	return (env);
}

int next_commands(char *s, char **env, char **parse)
{
	int i = 0;

	(void)s;
	if (compare(parse[0], "env")) {
		env_com(env);
		i = 1;
	}
	return (i);
}

int next_next_commands(char *s, char **env, char **parse)
{
	int i = 0;

	if (compare(parse[0], "exit") == 1) {
		exit(0);
		i = 1;
	}
	else if (compare(parse[0], "") == 1) {
		my_putstr("");
		i = 1;
	}
	else if (parse[0][0] == '.' && parse[0][1] == '/') {
		exe_exe(s, parse, env);
		i = 1;
	}
	return (i);
}
