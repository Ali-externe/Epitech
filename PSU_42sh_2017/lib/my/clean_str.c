/*
** EPITECH PROJECT, 2018
** clean_str
** File description:
** clean_str
*/

#include <stdlib.h>

int my_strlen(char *str);

void fill_str_semicolon(char *new, char *str)
{
	for (int i = 0, j = 0; str[i] != '\0'; i++, j++) {
		if (str[i] == ';') {
			if (str[i + 1] == ' ' || str[i + 1] == '\t')
				i++;
			for (; str[i + 1] == ' ' || str[i + 1] == '\t'; i++);
			if (j != 0) {
				if (new[j - 1] != ' ' && new[j - 1] != '\t') {
					new[j] = ' ';
					new[j + 1] = ';';
					new[j + 2] = ' ';
					j = j + 2;
				}
				else {
					new[j] = ';';
					new[j + 1] = ' ';
					j = j +	1;
				}
			}
		}
		else
			new[j] = str[i];
		if (str[i + 1] == '\0')
			new[j + 1] = '\0';
	}
}

char *clean_str(char *str)
{
	char *new;
	int mal = my_strlen(str);
	int plus = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (i != 0) {
			if (str[i] == ';' && str[i - 1] != ' ' && str[i - 1] != '\t')
				plus++;
		}
		if (str[i + 1] != '\0') {
			if (str[i] == ';' && str[i + 1] != ' ' && str[i + 1] != '\t')
				plus++;
		}
	}
	new = malloc(sizeof(char) * (mal + plus + 1));
	fill_str_semicolon(new, str);
	return (new);
}
