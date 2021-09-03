/*
** EPITECH PROJECT, 2017
** infinity2.c
** File description:
** infinity parrallax2
*/

#include "my.h"

sprite_t reset_prlx4(sprite_t spt, Vector_s iniV)
{
	sfSprite_setPosition(spt.bg4, iniV.Vectorr);
}

int destroyer(sprite_t spt, window_s disp)
{
	sfSprite_destroy(spt.bg1);
	sfTexture_destroy(spt.b1);
	sfSprite_destroy(spt.bg2);
	sfTexture_destroy(spt.b2);
	sfSprite_destroy(spt.bg3);
	sfTexture_destroy(spt.b3);
	sfSprite_destroy(spt.bg4);
	sfTexture_destroy(spt.b4);
	sfSprite_destroy(spt.bg6);
	sfTexture_destroy(spt.b6);
	sfSprite_destroy(spt.bg7);
	sfTexture_destroy(spt.b7);
	sfRenderWindow_destroy(disp.window);
	return(0);
}

Runner_s saut(Runner_s *pnj, Rect_s *ini, Vector_s iniV)
{
	sfTime time;
	float seconds;

	time = sfClock_getElapsedTime(ini->clockjump);
	seconds = time.microseconds / 1000000.0;

	if (ini->a == 1) {
		ini->Runner.top = 160;
		ini->Runner.left = 0;
		if(seconds < 0.3) {
			sfSprite_move(pnj->heros, iniV.Vectorj);
		}
		if (seconds > 0.3) {
			ini->a = 0;
		}
	}
	if (sfSprite_getPosition(pnj->heros).y != (iniV.Vectorss.y) && (ini->a != 1)) {
		sfSprite_move(pnj->heros, iniV.Vectord);
		ini->Runner.top = 160;
		ini->Runner.left = 85.7;
	}
	if (sfSprite_getPosition(pnj->heros).y == (iniV.Vectorss.y) ) {
		ini->Runner.top = 0;

	}

}

Vector_t get_pos_pics(Runner_s pnj, Vector_t iniV2)
{
	iniV2.infpics = sfSprite_getPosition(pnj.obstacle);
	return(iniV2);
}

Runner_s reset_pics(Runner_s pnj, Vector_s iniV)
{
	sfSprite_setPosition(pnj.obstacle, iniV.pic);
}
