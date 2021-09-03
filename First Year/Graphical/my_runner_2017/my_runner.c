/*
** EPITECH PROJECT, 2017
** graphi.c
** File description:
** graphic
*/
#include "my.h"

int main()
{
	sfEvent event;
	Rect_s runanime;
	all_s initializze = initializaion(initializze);
	while (sfRenderWindow_isOpen(initializze.disp.window)) {
		initializze = inidisplay(initializze);
		while (sfRenderWindow_pollEvent(initializze.disp.window, &event)) {
			if(sfKeyboard_isKeyPressed(sfKeySpace) && sfSprite_getPosition(initializze.pnj.heros).y == 600) {
				sfClock_restart(initializze.ini.clockjump);
				initializze.ini.a = 1;
			}
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(initializze.disp.window);
		}
	}
	destroyer(initializze.spt, initializze.disp);
}
