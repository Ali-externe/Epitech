/*
** EPITECH PROJECT, 2018
** initile2.c
** File description:
** initial
*/

#include "my.h"

void execution(void)
{
	sfEvent event;
	all_s initializze = madezeros(initializze);
	sfMusic *Zbeub;
	Zbeub = sfMusic_createFromFile("Zbeub.wav");
	while (sfRenderWindow_isOpen(initializze.disp.window)) {
		initializze = game(initializze, Zbeub);
		while (sfRenderWindow_pollEvent\
			(initializze.disp.window, &event)) {
			if (event.type == sfEvtMouseButtonPressed)
				initializze = \
				optiongame(initializze, Zbeub);
			if (event.type == sfEvtClosed) {
				sfRenderWindow_close\
				(initializze.disp.window);
			}
		}
	}
	sfMusic_destroy(Zbeub);
	destroyer(initializze);

}

Vector_t vector2(Vector_t vec2)
{
	vec2.bird_position_dead.x = 0;
	vec2.bird_position_dead.y = 0;
	vec2.birdinwindow.x = 0;
	vec2.birdinwindow.y = 0;
	vec2.dbirdinwindow.x = 0;
	vec2.Pcross.x = 0;
	vec2.Pcross.y = 0;
	vec2.pourcent.x = 1840;
	vec2.pourcent.y = 10;
	vec2.Mouse_position.x = 0;
	vec2.Mouse_position.y = 0;
	vec2.click_position.x = 0;
	vec2.click_position.y = 0;
	vec2.pos_plouf.x = 0;
	vec2.pos_plouf.y = 1791;
	return (vec2);
}

var_s variables(var_s var)
{
	var.a = 1;
	var.e = 1;
	var.p = 1;
	var.m = 0;
	var.angle = 90;
	var.anglee = 0;
	return (var);
}

void help(char *str)
{
	int a = 0;
	if (str[a] == '-' && str[a + 1] == 'h')
		explication();
}

void explication(void)
{
	my_putstr("\nUSAGE:");
	my_putstr(" ./my_hunter\n\n");
	my_putstr("DESCRIPTION:");
	my_putstr("  It's a war between twitter and facebook, there \n");
	my_putstr("	      is a bird which represents twitter logo and, a \n");
	my_putstr("	      hunter which represents the facebook logo. So, \n");
	my_putstr("	      facebook is hunting twitter...\n\n");
	my_putstr("GOAL:");
	my_putstr("  You are Facebook, you need to shoot this shameful bird \n");
	my_putstr("       through the crosshair. Kill \
	these birds and try to make \n");
	my_putstr("       a better score. (The best one \
		for the moment is 6pts 40%).\n\n");
	my_putstr("SCORE DESCRIPTION:");
	my_putstr("  One dead bird, make you win a point\
	, if you win 10 points, \n");
	my_putstr("                    you upgrade \
	to a 10 more percent difficulty.\n\n");
	my_putstr("CONTROLS:");
	my_putstr("  Mouse: Help you to aiming.\n");
	my_putstr("           LeftClick: Kill the birds.\n\n");
}
