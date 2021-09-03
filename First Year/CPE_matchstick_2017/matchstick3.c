
/*
** EPITECH PROJECT, 2018
** matchstick.c
** File description:
** matchstick
*/

#include "my.h"


int verif(char **map, int line, int *wh)
{
	char *hms;

	if(line == 0 || line > wh[1]) {
		my_putstr("Error: this line is out of range\n");
		return (choise(map, wh));
	}
	else {
		my_putstr("Matches: ");
		hms = get_next_line(0);
		return (com2(map, line, hms, wh));
	}
}

int com(char **map, char *stock, int *wh)
{
	int line;
	if(stock == 0 || stock == NULL)
		return(0);
	else {
		line = my_getnbr(stock);
		return (verif(map, line, wh));
	}
}

int choise(char **map, int *wh)
{
	char *stock;
	my_putstr("Line: ");
	stock = get_next_line(0);
	if(stock == NULL || stock == 0)
		return(0);
	else if(stock != NULL)
		return (com(map, stock, wh));
}

int putstrchar(char **map, int *wh)
{
	int a = 0;
	int e = my_strlen2(map, wh);

	while (a != (wh[1] + 2)) {
		my_putstr(map[a]);
		my_putchar('\n');
		a++;
	}
	if (e == 0) {
		my_putstr("I lost... snif... but I'll get you next time!!");
		return(1);
	}
	my_putstr("\nYour turn:\n");
	return (choise(map, wh));
}

int putsticks(char **map, int *wh)
{
	int line = 1;
	int rh = wh[1] - 1;
	int mid = 0;

	while(line != rh + 2) {
		mid = ((((wh[0] + 2) / 2) + 1) - (line));
		while (mid != (((wh[0] + 2) / 2) + (line))) {
			map[line][mid] = '|';
			mid++;
		}
		if (mid == (((wh[0] + 2) / 2) + (line)))
			line++;
	}
	return (putstrchar(map, wh));
}
