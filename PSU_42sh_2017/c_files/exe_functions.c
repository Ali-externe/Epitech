/*
** EPITECH PROJECT, 2017
** exe_function
** File description:
** exe_function
*/

#include "my.h"
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void exe_exe(char *s, char **parse, char **env)
{
	char *newargv[20] = { };
	int i = 0;
	pid_t pid = fork();

	(void)s;
	for (int j = 0; parse[i] != NULL; i++, j++)
		newargv[j] = parse[i];
	i = 0;
	if (pid > 0)
		wait(NULL);
	if (pid == 0) {
		if (execve(parse[0], newargv, env) == -1) {
			kill(getpid(), SIGUSR1);
		}
	}
}

int exe_next(char **path, char **newargv, char **parse, char **env)
{
	path = ls_conv(path, parse);
	for (int i = 0; path[i] != NULL; i++) {
		if (access(path[i], F_OK) == 0) {
			execve(path[i], newargv, env);
			return (2);
		}
	}
	return (0);
}

int exe_ls(char **path, char *s, char **parse, char **env)
{
	char *newargv[20] = { };
	pid_t pid = fork();

	(void)s;
	if (path == NULL) {
		kill(getpid(), SIGUSR1);
		return (1);
	}
	for (int j = 0; parse[j] != NULL; j++)
		newargv[j] = parse[j];
	if (pid > 0)
		wait(NULL);
	if (pid == 0) {
		if (exe_next(path, newargv, parse, env) == 2)
			return (0);
		my_putstr(parse[0]);
		my_putstr(": Command not found.\n");
		kill(getpid(), SIGUSR1);
		return (1);
	}
	return (1);
}
