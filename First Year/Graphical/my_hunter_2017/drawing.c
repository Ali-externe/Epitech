/*
** EPITECH PROJECT, 2018
** drawing.c
** File description:
** drawing
*/

#include "my.h"

sprite_t SetnRect(sprite_t spt, Rect_s ini, Rect_t ini2)
{
	sfSprite_setTexture(spt.sprite, spt.texture, sfTrue);
	sfSprite_setTexture(spt.birds, spt.Bird, sfTrue);
	sfSprite_setTexture(spt.Facebook, spt.FB, sfTrue);
	sfSprite_setTexture(spt.nb, spt.score, sfTrue);
	sfSprite_setTexture(spt.nb2, spt.score2, sfTrue);
	sfSprite_setTexture(spt.pourcentage, spt.score3, sfTrue);
	sfSprite_setTexture(spt.Hair, spt.Cross, sfTrue);

	sfSprite_setTextureRect(spt.birds, ini.rect);
	sfSprite_setTextureRect(spt.Facebook, ini.Fb);
	sfSprite_setTextureRect(spt.nb, ini.numbr1);
	sfSprite_setTextureRect(spt.nb2, ini.numbr2);
	sfSprite_setTextureRect(spt.pourcentage, ini2.prct);
	sfSprite_setTextureRect(spt.Bird_dead, ini2.Dead_bird);
	sfSprite_setTextureRect(spt.Hair, ini2.Crosshair);
	return (spt);
}

window_s pos(window_s disp, sprite_t spt)
{
	sfRenderWindow_drawSprite(disp.window, spt.sprite, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.birds, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.Facebook, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.nb, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.nb2, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.pourcentage, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.Bird_dead, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.Hair, NULL);
	sfRenderWindow_drawSprite(disp.window, spt.Menu, NULL);
	return (disp);
}

sprite_t setpos(sprite_t spt, Vector_s iniV, Vector_t iniV2)
{
	sfSprite_setPosition(spt.Facebook, iniV.floor);
	sfSprite_setPosition(spt.Menu, iniV.menu_position);
	sfSprite_setPosition(spt.nb, iniV.nub_1);
	sfSprite_setPosition(spt.nb2, iniV.nub_2);
	sfSprite_setPosition(spt.pourcentage, iniV2.pourcent);
	sfSprite_setPosition(spt.Hair, iniV2.Pcross);
	return (spt);
}
