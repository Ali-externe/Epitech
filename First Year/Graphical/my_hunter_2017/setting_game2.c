/*
** EPITECH PROJECT, 2018
** graphi.c
** File description:
** graphic
*/
#include "my.h"


all_s deadbird(all_s initializze, sfMusic *Zbeub)
{
	initializze = posdead(initializze, Zbeub);
	if (initializze.val.a >= 5)
		initializze.ini.Fb.left = (142.9 * initializze.val.a);
	initializze.val.a++;
	initializze.val.m = 1;
	if (initializze.val.a >= 10) {
		initializze.val.a = 1;
		initializze.ini.numbr1.left = (70 * initializze.val.p);
		initializze.val.p++;
	}
	return (initializze);
}

all_s posdead(all_s initializze, sfMusic *Zbeub)
{
	initializze.iniV2.bird_position_dead =\
	sfSprite_getPosition(initializze.spt.birds);
	sfMusic_play(Zbeub);
	initializze.iniV.Vectorr.y = rand() % 770;
	sfSprite_setPosition(initializze.spt.birds, initializze.iniV.Vectorr);
	initializze.iniV.Vector.x = initializze.iniV.Vector.x + 0.2;
	sfSprite_setPosition(initializze.spt.Bird_dead, \
		initializze.iniV2.bird_position_dead);
	sfSprite_setTexture(initializze.spt.Bird_dead, \
		initializze.spt.Dead, sfTrue);
	initializze.iniV2.pos_plouf = \
	sfSprite_getPosition(initializze.spt.Bird_dead);
	initializze.ini.Fb.left = (142.9 * initializze.val.a);

	return (initializze);
}
