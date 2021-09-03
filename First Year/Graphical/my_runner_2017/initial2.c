/*
** EPITECH PROJECT, 2017
** initial.c
** File description:
** initialize
*/

#include "my.h"

Runner_s inirunner(Runner_s run)
{
	run.theheros = sfTexture_createFromFile("runner.png", NULL);
	run.heros = sfSprite_create();
	run.obst = sfTexture_createFromFile("pics.png", NULL);
	run.obstacle = sfSprite_create();
	return(run);
}

all_s initializaion(all_s initializze)
{
	initializze.ini = inirect(initializze.ini);
	initializze.disp = window(initializze.disp);
	initializze.spt = texture_sprite(initializze.spt);
	initializze.iniV = vector(initializze.iniV);
	initializze.pnj = inirunner(initializze.pnj);
	initializze.pnj = setposrunner(initializze.pnj, initializze.iniV);
	return(initializze);
}

all_s inidisplay(all_s initializze)
{
	initializze.disp = pos(initializze.disp, initializze.spt);
	initializze.disp = posrunner(initializze.disp, initializze.pnj);
	initializze.spt = setnrect(initializze.spt, initializze.ini);
	initializze.pnj = setnrectrunner(initializze.pnj, initializze.ini);
	initializze.spt = movpos(initializze.spt, initializze.iniV);
	initializze.spt = infinity_prlx(initializze.spt, initializze.iniV);
	animationrunner(&initializze.ini);
	saut(&initializze.pnj, &initializze.ini, initializze.iniV);
	initializze.pnj = movposrunner(initializze.pnj, initializze.iniV);
	initializze.pnj = infinity_pics(initializze.pnj, initializze.iniV);
	sfRenderWindow_display(initializze.disp.window);
	return(initializze);
}

Rect_s animationrunner(Rect_s *runaanime)
{
	sfTime time;
	float seconds;

	time = sfClock_getElapsedTime(runaanime->clock);
	seconds = time.microseconds / 1000000.0;

	if (seconds > 0.11 && (runaanime->Runner.top == 0)) {
		sfClock_restart(runaanime->clock);
		if(runaanime->Runner.left <= 428.5) {
			runaanime->Runner.left += 85.7;
		}
		if (runaanime->Runner.left >= 428.5)
			runaanime->Runner.left = 0;
	}
}
