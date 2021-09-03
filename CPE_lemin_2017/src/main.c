/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "../include/my.h"

int check_minus(char *str)
{
	int ret = 0;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '-')
			ret = 1;
	}
	return (ret);
}

stc_t *create_anthill(char **info, stc_t *stc)
{
	int comp = 0;

	for (int i = 0; info[i] != NULL; i++) {
		if (check_minus(info[i]) && (comp = my_getnbr(info[i])) == stc->start) {
			
		}
	}
}

stc_t *through_info(char **info)
{
	int start = 0;
	int end = 0;
	int i = 0;
	int j = 0;
	stc_t *stc = malloc(sizeof(stc_t));

	for (; my_strcmp(info[i], "##start") != 1; i++);
	start = my_getnbr(info[i + 1]);
	for (; my_strcmp(info[j], "##end") != 1; j++);
	end = my_getnbr(info[j + 1]);
	stc->start = start;
	stc->end = end;
	return (stc);
}

char **get_info()
{
	char **info = malloc(sizeof(char *) * 100);
	char *s;
	int i = 0;

	for (; (s = get_next_line(0)) != NULL; i++) {
		info[i] = s;
	}
	info[i] = NULL;
	return (info);
}

int main(int argc, char **argv)
{
	char **info = get_info();
	stc_t *stc;

	if (info[0] == NULL)
                return (84);
	info = beautiful_info(info);
	for (int j = 0; info[j] != NULL; j++) {
                my_putstr(info[j]);
                my_putchar('\n');
        }
	return (0);
}
