/*
** EPITECH PROJECT, 2018
** mana_info
** File description:
** mana_info
*/

#include "../include/my.h"

int verif_comment(char *str)
{
	int ret = 0;
	int nb = 0;

	if (my_strcmp(str, "##start"))
		return (0);
	if (my_strcmp(str, "##end"))
		return (0);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] > 47 && str[i] < 58)
			nb++;
	}
	if (nb == 0)
		return (1);
	return (0);
}

char *my_strcpy_spe(char *str)
{
	int len = my_strlen(str);
	char *ok = malloc(sizeof(char) * len + 1);

	if (my_strcmp(str, "##start")) {
		ok = my_strcpy("##start");
		return (ok);
	}
	if (my_strcmp(str, "##end")) {
		ok = my_strcpy("##end");
		return (ok);
	}
	for (int i = 0; i != len; i++) {
		if (str[i] > 47 && str[i] < 58 || str[i] == ' '
		    && str[i + 1] > 47 && str[i + 1] < 58)
			ok[i] = str[i];
	}
	ok[len] = '\0';
	return (ok);
}

void next_info(char **full, int i, int j, char **info)
{
	full[i] = my_strcpy("#tunnels");
	i++;
	for (; info[j] != NULL; i++, j++) {
		if (info[j] == NULL)
			break;
		full[i] = my_strcpy(info[j]);
	}
	full[i] = my_strcpy("#moves");
	full[i + 1] = NULL;
}

void for_20_lines_norm(char **full, char **info)
{
	full[0] = my_strcpy("#number_of_ants");
	full[1] = my_strcpy(info[0]);
	full[2] = my_strcpy("#rooms");
}

char **beautiful_info(char **info)
{
	char **full = malloc(sizeof(char *) * 100);
	int i = 3;
	int j = 1;

	for_20_lines_norm(full, info);
	for (int cond = 0; cond != 1;) {
		if (info[j] == NULL)
			break;
		if (verif_comment(info[j]) == 0) {
			full[i] = my_strcpy_spe(info[j]);
			i++;
		}
		j++;
		if (info[j] == NULL)
			break;
		if (check_minus(info[j]) == 1)
			cond = 1;
	}
	next_info(full, i, j, info);
	return (full);
}
