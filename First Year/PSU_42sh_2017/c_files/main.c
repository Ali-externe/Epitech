/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "my.h"
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int compare(char *str1, char *str2)
{
	int len1 = my_strlen(str1);
	int len2 = my_strlen(str2);
	int i = 0;
	int j = 0;

	if (len1 == len2) {
		while (i != len2) {
			if (str1[j] == str2[i]) {
				i++;
				j++;
			}
			else
				return (0);
		}
		return (1);
	}
	else {
		return (0);
	}
}

int print_prompt(char *pwd)
{
	size_t size = 200;

	pwd = getcwd(pwd, size);
	my_putstr("-> ");
	my_putstr(pwd);
	my_putstr(" $>");
	return (1);
}

void minishell(char **env)
{
	char *s;
	char *pwd = malloc(sizeof(char) * 200);
	char **parse;
	char ***end;
	int pid_f = fork();

	wait(NULL);
	if (pid_f == 0) {
		while (print_prompt(pwd)) {
			s = get_next_line(0);
			s = clean_str(s);
			parse = my_parser(s);
			end = parse_command(parse);
			for (int i = 0; end[i] != NULL; i++)
				env = commands(s, env, end[i]);
		}
	}
}

int main(int argc, char **argv, char**envp)
{
	(void)argc;
	(void)argv;
	minishell(envp);
	return (0);
}
