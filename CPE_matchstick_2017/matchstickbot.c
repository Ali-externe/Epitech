/*
** EPITECH PROJECT, 2018
** matchstick.c
** File description:
** matchstick
*/

#include "my.h"

int get_width(int *wh)
{
	wh[0] = ((wh[1] * 2) - 1);

	return (wh[0]);
}

int aidelsticks(char **map, int ailine, int aimatch, int *wh)
{
	int nbdls = 0;
	int a = my_strlen4(map, ailine, wh);

	while (nbdls != aimatch) {
		map[ailine][a] = ' ';
		a--;
		nbdls++;
	}
	my_putstr("\nAI's turn...\n");
	my_putstr("AI removed ");
	my_put_nbr(aimatch);
	my_putstr(" match(es) from line ");
	my_put_nbr(ailine);
	my_putchar('\n');
	return (putstrchar(map, wh));
}

int delaisticks(char **map, int ailine, int aimatch, int *wh)
{
	int a = 0;
	int nbas = my_strlen2(map, wh);
	int nbil = my_strlen3(map, ailine);

	if(aimatch == 0 || ailine == 0)
		return(my_robot(map, wh));


	if (nbas == 0) {
		my_putstr("You lost, too bad...");
		return(2);
	}

	if(nbil < aimatch)
		return (my_robot(map, wh));

	if(nbas > 0 && nbil >= aimatch)
		return (aidelsticks(map, ailine, aimatch, wh));
}

int my_robot(char **map, int *wh)
{
	int ailine = rand() % wh[1] + 1;
	int aimatch = rand() % wh[2] + 1;

	if(aimatch == 0)
		aimatch = rand() % wh[2];
	if(ailine == 0)
		ailine = rand() % wh[1];

	return (delaisticks(map, ailine, aimatch, wh));
}
