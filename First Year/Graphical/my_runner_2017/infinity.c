/*
** EPITECH PROJECT, 2017
** infinity.c
** File description:
** infinity parrallax
*/

#include "my.h"

sprite_t infinity_prlx(sprite_t spt, Vector_s iniV)
{
	Vector_t iniV2;
	iniV2 = vector2(iniV2);
	iniV2 = get_pos_prlx(spt, iniV2);

	if (iniV2.parlx2.x < -1920) {
		reset_prlx(spt, iniV);
	}
	if (iniV2.parlx3.x < -1950) {
		reset_prlx2(spt, iniV);
	}
	if (iniV2.parlx1.x < -1920) {
		reset_prlx3(spt, iniV);
	}
	if (iniV2.parlx4.x < -1950) {
		reset_prlx4(spt, iniV);
	}
}

Vector_t get_pos_prlx(sprite_t spt, Vector_t iniV2)
{
	iniV2.parlx1 = sfSprite_getPosition(spt.bg1);
	iniV2.parlx2 = sfSprite_getPosition(spt.bg2);
	iniV2.parlx3 = sfSprite_getPosition(spt.bg3);
	iniV2.parlx4 = sfSprite_getPosition(spt.bg4);
	iniV2.parlx6 = sfSprite_getPosition(spt.bg6);
	return(iniV2);
}

sprite_t reset_prlx(sprite_t spt, Vector_s iniV)
{
	sfSprite_setPosition(spt.bg2, iniV.Vectorr);
}

sprite_t reset_prlx2(sprite_t spt, Vector_s iniV)
{
	sfSprite_setPosition(spt.bg3, iniV.Vectorr);
}

sprite_t reset_prlx3(sprite_t spt, Vector_s iniV)
{
	sfSprite_setPosition(spt.bg1, iniV.Vectorr);
}
