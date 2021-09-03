/*
** EPITECH PROJECT, 2018
** matchstick.c
** File description:
** matchstick
*/

#include "my.h"

int putstrcharai(char **map, int *wh)
{
	int a = 0;


	while (a != (wh[1] + 2)) {
		my_putstr(map[a]);
		my_putchar('\n');
		a++;
	}
	return (my_robot(map, wh));
}

int delsticks(char **map, int line, int hmsticks, int *wh)
{
	int nbdls = 0;
	int a = my_strlen4(map, line, wh);

	while (nbdls != hmsticks) {
		map[line][a] = ' ';
		a--;
		nbdls++;
	}
	my_putstr("Player removed ");
	my_put_nbr(hmsticks);
	my_putstr(" match(es) from line ");
	my_put_nbr(line);
	my_putchar('\n');
	return (putstrcharai(map, wh));
}

int verifend(char **map, int line, int hmsticks, int *wh)
{
	int a = 0;
	int nbas = my_strlen2(map, wh);
	int nbil = my_strlen3(map, line);


	if (nbas == 0) {
		my_putstr("I lost... snif... but I'll get you next time!!");
		return(1);
	}

	if(nbil < hmsticks) {
		my_putstr("not enought sticks on line\n");
		return (choise(map, wh));
	}

	if(nbas > 0 && nbil >= hmsticks)
		return (delsticks(map, line, hmsticks, wh));
}

int verif2(char **map, int hmsticks, int line, int *wh)
{
	if(hmsticks == 0 || hmsticks > wh[2]) {
		my_putstr("you cannot remove more than ");
		my_put_nbr(wh[2]);
		my_putstr(" matches per turn\n");
		return (choise(map, wh));
	}
	else {
		return (verifend(map, line, hmsticks, wh));
	}
}

int com2(char **map, int line, char *hms, int *wh)
{
	int hmsticks;

	if(hms == NULL)
		return(0);
	else {
		hmsticks = my_getnbr(hms);
		if(hmsticks < 0) {
			my_putstr("Error: invalid input\
			 (positive number expected)");
		}
		if(hmsticks == 0) {
			my_putstr("Error: you have to\
			remove at least one match\n");
			return (choise(map, wh));
		}
		return (verif2(map, hmsticks, line, wh));
	}
}
