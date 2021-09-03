/*
** EPITECH PROJECT, 2018
** graphi.c
** File description:
** graphic
*/
#include "my.h"


all_s game(all_s initializze, sfMusic *Zbeub)
{
	initializze = inidisplay(initializze);
	initializze = inidisplay2(initializze);
	initializze = inidisplay3(initializze);

	return (initializze);
}

all_s madezeros(all_s initializze)
{
	initializze.disp = window(initializze.disp);
	initializze.spt = texture_sprite(initializze.spt);
	initializze.ini = inirect(initializze.ini);
	initializze.ini2 = inirect2(initializze.ini2);
	initializze.iniV = vector(initializze.iniV);
	initializze.iniV2 = vector2(initializze.iniV2);
	initializze.val = variables(initializze.val);
	return (initializze);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		help(argv[1]);
	if(argc == 1) {
		execution();
	}
}

all_s inidisplay2(all_s initializze)
{
	initializze.iniV2.Mouse_position = \
	sfMouse_getPositionRenderWindow(initializze.disp.window);
	initializze.iniV2.Pcross.x = (initializze.iniV2.Mouse_position.x - 45);
	initializze.iniV2.Pcross.y = (initializze.iniV2.Mouse_position.y - 45);
	initializze.iniV.floor.x = (initializze.iniV2.Mouse_position.x - 75);
	animation(&initializze.ini);
	initializze.iniV2.birdinwindow = \
	sfSprite_getPosition(initializze.spt.birds);
	if (initializze.val.m != 1 && initializze.iniV2.birdinwindow.x >= 1920) {
		if (initializze.ini.Fb.left > 0) {
			initializze.ini.Fb.left \
			= (initializze.ini.Fb.left - 142.9);
			initializze.iniV.Vector.x = \
			initializze.iniV.Vector.x - 0.2;
			initializze.val.a = initializze.val.a - 1;
		}
		if (initializze.val.a <= 0)
		initializze.val.a = 1;
	}
	return (initializze);
}



void destroyer(all_s initializze)
{
	sfSprite_destroy(initializze.spt.birds);
	sfTexture_destroy(initializze.spt.Bird);
	sfSprite_destroy(initializze.spt.sprite);
	sfTexture_destroy(initializze.spt.texture);
	sfSprite_destroy(initializze.spt.Facebook);
	sfTexture_destroy(initializze.spt.FB);
	sfSprite_destroy(initializze.spt.Menu);
	sfTexture_destroy(initializze.spt.eximenu);
	sfSprite_destroy(initializze.spt.nb);
	sfTexture_destroy(initializze.spt.score);
	sfSprite_destroy(initializze.spt.nb2);
	sfTexture_destroy(initializze.spt.score2);
	sfSprite_destroy(initializze.spt.pourcentage);
	sfSprite_destroy(initializze.spt.Bird_dead);
	sfSprite_destroy(initializze.spt.Hair);
	sfTexture_destroy(initializze.spt.score3);
	sfTexture_destroy(initializze.spt.Cross);
	sfTexture_destroy(initializze.spt.Dead);
	sfRenderWindow_destroy(initializze.disp.window);
}
