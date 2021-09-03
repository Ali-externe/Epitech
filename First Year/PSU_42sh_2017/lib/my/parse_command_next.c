/*
** EPITECH PROJECT, 2017
** parse_command
** File description:
** parse_command
*/

#include <stdlib.h>

void my_putchar(char c);
char **my_parser(char *str);
int my_putstr(char *str);
int my_strcmp(char *str1, char *str2);
int my_strlen(char *str);

char *copy_out_semicolons(char *str, char *copy, int i, int j)
{
	int mal = 0;
	int a = 0;

	(void)i;
	(void)j;
	for (int z = 0; str[z] != '\0'; z++) {
		if (str[z] == ';')
			mal++;
	}
	copy = malloc(sizeof(char) * (my_strlen(str) - mal + 2));
	for (int z = 0; str[z] != '\0'; z++) {
		if (str[z] != ';') {
			copy[a] = str[z];
			a++;
		}
	}
	copy[a] = '\0';
	return (copy);
}
