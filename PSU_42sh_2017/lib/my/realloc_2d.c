/*
** EPITECH PROJECT, 2017
** 2d_realloc
** File description:
** 2d_realloc
*/

#include <stdlib.h>

void my_putchar(char c);
char **my_parser(char *str);
int my_putstr(char *str);
int my_strcmp(char *str1, char *str2);
char *copy_out_semicolons(char *str, char *copy, int i, int j);
char *my_strcpy(char *str);
void clean_semicolons(char ***end);
int my_strlen(char *str);

char **realloc_2d_parse(char **str, char *new)
{
	char **yes;
	char *copy;
	int i = 0;
	int j = 0;

	copy = malloc(sizeof(char) * (my_strlen(new) + 2));
	for (; str[i] != NULL; i++);
	yes = malloc(sizeof(char *) * (i + 2));
	yes[i + 1] = NULL;
	for (i = 0; str[i] != NULL; i++)
		yes[i] = str[i];
	for (; new[j] != '\0'; j++)
		copy[j] = new[j];
	copy[j] = '=';
	copy[j + 1] = '\0';
	yes[i] = copy;
	return (yes);
}

char **realloc_2d(char **str, char *new, char *next)
{
	char **yes;
	char *copy;
	int i = 0;
	int j = 0;

	copy = malloc(sizeof(char) * (my_strlen(new) + my_strlen(next) + 2));
	for (; str[i] != NULL; i++);
	yes = malloc(sizeof(char *) * (i + 2));
	yes[i + 1] = NULL;
	for (i = 0; str[i] != NULL; i++)
		yes[i] = str[i];
	for (; new[j] != '\0'; j++)
		copy[j] = new[j];
	copy[j] = '=';
	j++;
	for (int a = 0; next[a] != '\0'; j++, a++)
		copy[j] = next[a];
	copy[j] = '\0';
	yes[i] = copy;
	return (yes);
}
