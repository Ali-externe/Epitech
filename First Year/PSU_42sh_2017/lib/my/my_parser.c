/*
** EPITECH PROJECT, 2017
** my_parser
** File description:
** my_parser
*/

#include <stdlib.h>

int my_strlen(char *str);

void paste(char **parse, char *str)
{
	int i = 0;
	int y = 0;
	int x = 0;

	for (; str[i] == ' ' || str[i] == '\t'; i++);
	for (; str[i] != '\0'; y++) {
		x = 0;
		for (; str[i] != ' ' && str[i] != '\0' && str[i] != '\t'; i++, x++) {
			parse[y][x] = str[i];
		}
		parse[y][x] = '\0';
		for (; str[i] == ' ' || str[i] == '\t'; i++);
	}
}

void mal_dim(char **parse, char *str)
{
	int i = 0;
	int y = 0;
	int mal = 0;

	for (; str[i] == ' ' || str[i] == '\t'; i++);
	for (; str[i] != '\0'; y++) {
		mal = 0;
		for (; str[i] != ' ' && str[i] != '\0' && str[i] != '\t'; i++)
			mal++;
		parse[y] = malloc(sizeof(char) * mal + 1);
		if (str[i] == '\0')
			break;
		for (; str[i] == ' ' || str[i] == '\t'; i++);
	}
	paste(parse, str);
}

char **my_parser(char *str)
{
	char **parse;
	int mal = 0;
	int i = 0;

	for (; str[i] == ' '; i++);
	for (; str[i] != '\0'; i++) {
		if ((str[i] == ' ' && str[i + 1] != ' ') ||
			(str[i] == '\t' && str[i + 1] != '\t'))
			mal++;
	}
	parse = malloc(sizeof(char *) * (mal + 2));
	parse[mal + 1] = NULL;
	mal_dim(parse, str);
	return (parse);
}
