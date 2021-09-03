/*
** EPITECH PROJECT, 2017
** drawing.c
** File description:
** drawing
*/

#include "my.h"

Runner_s setnrectrunner(Runner_s pnj, Rect_s runn)
{
	sfSprite_setTexture(pnj.heros, pnj.theheros, sfTrue);
	sfSprite_setTexture(pnj.obstacle, pnj.obst, sfTrue);
	sfSprite_setTextureRect(pnj.heros, runn.Runner);
	return(pnj);
}

window_s posrunner(window_s disp, Runner_s pnj)
{
	sfRenderWindow_drawSprite(disp.window, pnj.heros, NULL);
	sfRenderWindow_drawSprite(disp.window, pnj.obstacle, NULL);
	return(disp);
}

Runner_s setposrunner(Runner_s pnj, Vector_s iniV)
{
	sfSprite_setScale(pnj.heros, iniV.Vectors);
	sfSprite_setScale(pnj.obstacle, iniV.scal);
	sfSprite_setPosition(pnj.heros, iniV.Vectorss);
	sfSprite_setPosition(pnj.obstacle, iniV.pic);
	return(pnj);
}

Runner_s movposrunner(Runner_s pnj, Vector_s iniV)
{
	sfSprite_move(pnj.obstacle, iniV.Vector2);
	return(pnj);
}

Runner_s infinity_pics(Runner_s pnj, Vector_s iniV){
	Vector_t iniV2;
	iniV2 = vector2(iniV2);
	iniV2 = get_pos_pics(pnj, iniV2);

	if(iniV2.infpics.x < -1920) {
		reset_pics(pnj, iniV);
	}
}
