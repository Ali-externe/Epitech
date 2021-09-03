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
char *copy_out_semicolons(char *str, char *copy, int i, int j);
char *my_strcpy(char *str);
void clean_semicolons(char ***end);

void separation(char ***parse, char **d_str, int mal)
{
	char **copy = malloc(sizeof(char *) * (mal + 2));

	for (int i = 0, y = 0, x = 0, cond = 0; d_str[i] != NULL; i++) {
		for (int j = 0; d_str[i][j] != '\0'; j++) {
			if (d_str[i][j] == ';' || (d_str[i][j] == '&' && d_str[i][j + 1] == '&'))
				cond = 1;
		}
		if (cond == 0)
			copy[x] = my_strcpy(d_str[i]);
		x++;
		if (d_str[i + 1] == NULL)
			cond = 1;
		if (cond == 1) {
			copy[x] = NULL;
			parse[y] = copy;
			copy = malloc(sizeof(char *) * (mal + 2));
			y++;
			x = 0;
			cond = 0;
		}
	}
	free(copy);
}

char ***parse_command(char **d_str)
{
	char ***parse;
	int mal = 0;
	int other_mal = 0;

	for (int i = 0; d_str[i] != NULL; i++, other_mal++) {
		for (int j = 0; d_str[i][j] != '\0'; j++) {
			if (d_str[i][j] != ';')
				mal++;
		}
	}
	parse = malloc(sizeof(char **) * (mal + 2));
	parse[mal + 1] = NULL;
	separation(parse, d_str, other_mal);
	clean_semicolons(parse);
	return (parse);
}

void clean_second_part(char ***end, int i, int j)
{
	char *copy = NULL;

	if (my_strcmp(end[i][j], ";"))
		end[i][j] = NULL;
	if (end[i][j] == NULL)
		return;
	for (int z = 0; end[i][j][z] != '\0'; z++) {
		if (end[i][j][z] == ';') {
			end[i][j] = copy_out_semicolons(end[i][j], copy, i, j);
		}
	}
}

void clean_semicolons(char ***end)
{
	for (int i = 0; end[i] != NULL; i++) {
		for (int j = 0; end[i][j] != NULL; j++) {
			clean_second_part(end, i, j);
		}
	}
}
/*
int main(void)
{
	char *test = "ls -l ; pwd; cd";
	char **test_f;
	char ***end;

	test_f = my_parser(test);
	end = parse_command(test_f);
	clean_semicolons(end);
	for (int i = 0; end[i] != NULL; i++) {
		for (int j = 0; end[i][j] != NULL; j++) {
			my_putstr(end[i][j]);
			my_putchar(' ');
		}
		my_putstr("\n\n\n");
	}
}
*/
