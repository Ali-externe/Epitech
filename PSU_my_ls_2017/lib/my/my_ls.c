/*
** EPITECH PROJECT, 2017
** my_ls.c
** File description:
** my_ls
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "my.h"

char** sortalpha(int size, char **list)
{
	int i1;
	int i2;
	char *str;

	list = malloc(sizeof(char *) * 1000);

	for (i1 = 0; i1 < size - 1; i1++)
		for (i2 = i1 + 1; i2 < size; i2++)
			if (list[i1] < list[i2]) {
				str = list[i1];
				list[i1] = list[i2];
				list[i2] = str;
			}
	return(list);
}

int flag_management(char *fl)
{
	int i = 1;
	int ac;
	char **av;

	for (; fl[i] != 0; ++i) {
		if (my_strncmp("l", fl + i, 1) == 0) {
			flag_l(ac, av);
		}
	}
	return (0);
}

int main(int ac, char** av)
{
	DIR *folder;
	struct dirent *fol;
	char **tsil;
	int a;

	tsil = malloc(sizeof(char *) * a + 1000);
	folder = opendir(".");

	if (folder != NULL) {
		while ((fol = readdir(folder)) != NULL) {
				tsil[a] = fol->d_name;
				if (*tsil[0] != '.') {
					my_putstr(*tsil);
					my_putchar('\n');
				}
				tsil[a + 1];
				if (ac > 1)
					if (av[1][0] == '-')
						flag_management(av[1]);
		}
		closedir(folder);
	}
	free(tsil);
	return(0);
}
