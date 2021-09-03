/*
** EPITECH PROJECT, 2018
** graphi.c
** File description:
** graphic
*/
#include "my.h"

Rect_s animation(Rect_s *anim)
{
	sfTime time;
	float seconds;
	time = sfClock_getElapsedTime(anim->clock);
	seconds = time.microseconds / 1000000.0;

	if (seconds > anim->i + 0.2)
		anim->rect.left = 150;
	if (seconds > anim->i + 0.4)
		anim->rect.left = 300;
	if (seconds > anim->i + 0.6)
		anim->rect.left = 450;
	if (seconds > anim->i + 0.8)
		anim->rect.left = 600;
	if (anim->rect.left >= 600) {
		anim->rect.left = 0;
		sfClock_restart(anim->clock);
	}
}

all_s optiongame(all_s initializze, sfMusic *Zbeub)
{
	initializze.iniV.bird_position = \
	sfSprite_getPosition(initializze.spt.birds);
	initializze.iniV2.click_position = \
	sfMouse_getPositionRenderWindow(initializze.disp.window);
	if ((initializze.iniV2.click_position.x <= \
		initializze.iniV.bird_position.x + 110) \
		&& (initializze.iniV2.click_position.y <= \
			initializze.iniV.bird_position.y + 110) \
	&& (initializze.iniV2.click_position.x > \
		initializze.iniV.bird_position.x) \
		&& (initializze.iniV2.click_position.y > \
			initializze.iniV.bird_position.y)) {
		initializze = deadbird(initializze, Zbeub);
	}
	return (initializze);
}

all_s inidisplay3(all_s initializze)
{
	initializze.iniV2.birdinwindow = \
	sfSprite_getPosition(initializze.spt.birds);
	initializze.iniV2.dbirdinwindow = \
	sfSprite_getPosition(initializze.spt.Bird_dead);

	if (initializze.iniV2.dbirdinwindow.x >= 1920 \
		|| initializze.iniV2.dbirdinwindow.y >= 1080)
	initializze.val.m = 0;
	if (initializze.iniV2.birdinwindow.x >= 1920 \
		|| initializze.iniV2.birdinwindow.y >= 1080) {
		initializze.iniV.Vectorr.y = rand() % 770;
		sfSprite_setPosition(initializze.spt.birds\
			, initializze.iniV.Vectorr);
		sfSprite_setRotation(initializze.spt.birds\
			, initializze.val.anglee);
		initializze.iniV.Vector.y = 0;
		initializze.val.m = 0;
	}

	return (initializze);
}

all_s menu(all_s initializze)
{
	if (initializze.val.e == 1) {
		if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
			sfSprite_setTexture(initializze.spt.Menu,\
				initializze.spt.eximenu, sfTrue);
				initializze.val.e = 0;
			}
			return (initializze);
		}
}

all_s inidisplay(all_s initializze)
{
	sfRenderWindow_setMouseCursorVisible(initializze.disp.window, sfFalse);
	initializze = menu(initializze);
	initializze.spt = SetnRect\
	(initializze.spt, initializze.ini, initializze.ini2);
	initializze.disp = pos(initializze.disp, initializze.spt);
	sfSprite_move(initializze.spt.birds, initializze.iniV.Vector);
	sfSprite_move(initializze.spt.Bird_dead, initializze.iniV.dead_vector);
	initializze.spt = setpos\
	(initializze.spt, initializze.iniV, initializze.iniV2);
	sfRenderWindow_display(initializze.disp.window);

	return (initializze);
}
