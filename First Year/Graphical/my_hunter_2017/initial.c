/*
** EPITECH PROJECT, 2018
** initial.c
** File description:
** initialize
*/

#include "my.h"

window_s window(window_s Wind)
{
	sfVideoMode mode = {1920, 1080, 32};
	Wind.window = sfRenderWindow_create\
	(mode, "My Hunter", sfResize | sfClose, NULL);
	return (Wind);
}

sprite_t texture_sprite(sprite_t display)
{
	display.Bird = sfTexture_createFromFile("robin.png", NULL);
	display.FB = sfTexture_createFromFile("FB.png", NULL);
	display.score = sfTexture_createFromFile("score.png", NULL);
	display.score2 = sfTexture_createFromFile("score.png", NULL);
	display.score3 = sfTexture_createFromFile("score.png", NULL);
	display.eximenu = sfTexture_createFromFile("Exit.png", NULL);
	display.Dead = sfTexture_createFromFile("robin_dead.png", NULL);
	display.Cross = sfTexture_createFromFile("cross.png", NULL);
	display.texture = sfTexture_createFromFile("Landscape.jpg", NULL);
	display.sprite = sfSprite_create();
	display.birds = sfSprite_create();
	display.Facebook = sfSprite_create();
	display.Menu = sfSprite_create();
	display.nb = sfSprite_create();
	display.nb2 = sfSprite_create();
	display.pourcentage = sfSprite_create();
	display.Bird_dead = sfSprite_create();
	display.Hair = sfSprite_create();
	return (display);
}

Rect_s inirect(Rect_s rect)
{
	rect.rect.top = 0;
	rect.rect.left = 0;
	rect.rect.width = 150;
	rect.rect.height = 150;
	rect.Fb.top = 0;
	rect.Fb.left = 0;
	rect.Fb.width = 143;
	rect.Fb.height = 150;
	rect.numbr1.top = 0;
	rect.numbr1.left = 0;
	rect.numbr1.width = 70;
	rect.numbr1.height = 70;
	rect.numbr2.top = 0;
	rect.numbr2.left = 0;
	rect.numbr2.width = 70;
	rect.numbr2.height = 70;
	rect.seconds = 0;
	rect.i = 0;
	rect.clock = sfClock_create();
	return (rect);
}

Rect_t inirect2(Rect_t rectt)
{
	rectt.Crosshair.top = 0;
	rectt.Crosshair.left = 0;
	rectt.Crosshair.width = 90;
	rectt.Crosshair.height = 84.6;
	rectt.prct.top = 0;
	rectt.prct.left = 700;
	rectt.prct.width = 70;
	rectt.prct.height = 70;
	rectt.Dead_bird.top = 0;
	rectt.Dead_bird.left = 0;
	rectt.Dead_bird.width = 150;
	rectt.Dead_bird.height = 150;
	return (rectt);
}

Vector_s vector(Vector_s vec)
{
	vec.Vector.x = 2.5;
	vec.Vector.y = 0;
	vec.Vectorr.x = 0;
	vec.Vectorr.y = 0;
	vec.dead_vector.x = 2.5;
	vec.dead_vector.y = 6;
	vec.floor.x = 1;
	vec.floor.y = 870;
	vec.nub_1.x = 1700;
	vec.nub_1.y = 10;
	vec.nub_2.x = 1770;
	vec.nub_2.y = 10;
	vec.menu_position.x = 480;
	vec.menu_position.y = 300;
	vec.bird_position.x = 0;
	return (vec);
}
