/*
** EPITECH PROJECT, 2017
** initial.c
** File description:
** initialize
*/

#include "my.h"

window_s window(window_s Wind)
{
	sfVideoMode mode = {1920, 1080, 32};
	Wind.window = sfRenderWindow_create(mode, "My Runner", sfFullscreen | sfClose, NULL);
	return (Wind);
}

sprite_t texture_sprite(sprite_t display)
{
	display.b1 = sfTexture_createFromFile("b1.png", NULL);
	display.b2 = sfTexture_createFromFile("b2.png", NULL);
	display.b3 = sfTexture_createFromFile("b3.png", NULL);
	display.b4 = sfTexture_createFromFile("b4.png", NULL);
	display.b6 = sfTexture_createFromFile("b6.png", NULL);
	display.b7 = sfTexture_createFromFile("b7.png", NULL);
	display.bg1 = sfSprite_create();
	display.bg2 = sfSprite_create();
	display.bg3 = sfSprite_create();
	display.bg4 = sfSprite_create();
	display.bg6 = sfSprite_create();
	display.bg7 = sfSprite_create();
	return(display);
}

Rect_s inirect(Rect_s rect)
{
	rect.background.top = 0;
	rect.background.left = 0;
	rect.background.width = 0;
	rect.background.height = 0;
	rect.Runner.top = 0;
	rect.Runner.left = 0;
	rect.Runner.width = 85.7;
	rect.Runner.height = 105;
	rect.clock = sfClock_create();
	rect.clockjump = sfClock_create();
	return(rect);
}


Vector_s vector(Vector_s vec)
{
	vec.Vectorr.x = 0;
	vec.Vectorr.y = 0;
	vec.Vector1.x = -3;
	vec.Vector1.y = 0;
	vec.Vector2.x = -8;
	vec.Vector2.y = 0;
	vec.Vector3.x = -12;
	vec.Vector3.y = 0;
	vec.Vector4.x = -0.005;
	vec.Vector4.y = 0;
	vec.Vectoru.x = -40;
	vec.Vectoru.y = 600;
	vec.Vectors.x = 2;
	vec.Vectors.y = 2;
	vec.Vectorss.x = 15;
	vec.Vectorss.y = 600;
	vec.Vectorj.x = 0;
	vec.Vectorj.y = -4;
	vec.Vectord.x = 0;
	vec.Vectord.y = 2;
	vec.pic.x = 1950;
	vec.pic.y = 710;
	vec.scal.x = 0.5;
	vec.scal.y = 0.5;
	return(vec);
}

Vector_t vector2(Vector_t vec2)
{
	vec2.parlx1.x = 0;
	vec2.parlx1.y = 0;
	vec2.parlx2.x = 0;
	vec2.parlx2.y = 0;
	vec2.parlx3.x = 0;
	vec2.parlx3.y = 0;
	vec2.parlx4.x = 0;
	vec2.parlx4.y = 0;
	vec2.parlx6.x = 0;
	vec2.parlx6.y = 0;
	vec2.infpics.x = 0;
	vec2.infpics.y = 0;
	return(vec2);
}
