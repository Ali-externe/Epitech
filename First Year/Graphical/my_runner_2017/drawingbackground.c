/*
** EPITECH PROJECT, 2017
** drawing.c
** File description:
** drawing
*/

#include "my.h"

sprite_t setnrect(sprite_t spt, Rect_s ini)
{
	sfSprite_setTexture(spt.bg1, spt.b1, sfTrue);
	sfSprite_setTexture(spt.bg2, spt.b2, sfTrue);
	sfSprite_setTexture(spt.bg3, spt.b3, sfTrue);
	sfSprite_setTexture(spt.bg4, spt.b4, sfTrue);
	sfSprite_setTexture(spt.bg6, spt.b6, sfTrue);
	sfSprite_setTexture(spt.bg7, spt.b7, sfTrue);
	return(spt);
}

window_s pos(window_s disp, sprite_t spt)
{
	sfRenderWindow_drawSprite(disp.window, spt.bg7, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.bg6, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.bg4, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.bg3, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.bg2, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.bg1, NULL);
	return(disp);
}

sprite_t setpos(sprite_t spt, Vector_s iniV)
{
	sfSprite_setPosition(spt.bg1, iniV.Vectorr);
	sfSprite_setPosition(spt.bg2, iniV.Vectorr);
	sfSprite_setPosition(spt.bg3, iniV.Vectorr);
	sfSprite_setPosition(spt.bg4, iniV.Vectorr);
	sfSprite_setPosition(spt.bg6, iniV.Vectorr);
	sfSprite_setPosition(spt.bg7, iniV.Vectorr);
	return(spt);
}

sprite_t movpos(sprite_t spt, Vector_s iniV)
{
	sfSprite_move(spt.bg1, iniV.Vector3);
	sfSprite_move(spt.bg2, iniV.Vector2);
	sfSprite_move(spt.bg3, iniV.Vector2);
	sfSprite_move(spt.bg4, iniV.Vector1);
	sfSprite_move(spt.bg6, iniV.Vector4);
	sfSprite_move(spt.bg7, iniV.Vector4);
	return(spt);
}
