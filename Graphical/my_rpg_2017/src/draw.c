/*
** EPITECH PROJECT, 2018
** draw.c
** File description:
** draw and destroy everything
*/

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/my.h"

void draw_inpause(text* text, sprite* sprite, other* other)
{
	if (other->pplay == 3) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->menupnew, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->mute, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->plusless, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->nbrsound, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->nbrsound2, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->nbrsound3, NULL);
	}
	if (other->pplay == 4 && other->swihelp == 0) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->menupnew, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->text, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->next, NULL);
	}
	if (other->pplay == 4 && other->swihelp == 1) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->menupnew, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->back, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->next, NULL);
	}
	if (other->pplay == 4 && other->swihelp == 2) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->menupnew, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->back, NULL);
	}
}

void draw_pause(text* text, sprite* sprite, other* other)
{
	if (other->pplay == 2 && other->paumenu == 0) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->menup, NULL);
	}
	if (other->pplay == 2 && other->paumenu == 1) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->menup, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->menupv, NULL);
	}
	if (other->pplay == 2 && other->paumenu == 2) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->menup, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->menuph, NULL);
	}
	if (other->pplay == 2 && other->paumenu == 3) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->menup, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->menupq, NULL);
	}
	draw_inpause(text, sprite, other);
}

void drawgame(text* text, sprite* sprite, other* other)
{
	if (other->pplay == 1 && other->swimap == 0) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->mapbase, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->boarhatdown, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->perso, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->boarhatup, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->options, NULL);
	}
	if (other->pplay == 1 && other->swimap == 1) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->boarhatenter, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->persoquest, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->questex, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->perso, NULL);
	}
	if (other->pplay == 1 && other->swimap == 2) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->map2, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->perso, NULL);
		sfRenderWindow_drawSprite(text->window, sprite->options, NULL);
	}
}

void draw(text* text, sprite* sprite, other* other)
{
	if (other->pplay == 0 && other->swimenu == 0) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->menu, NULL);
	}
	if (other->pplay == 0 && other->swimenu == 1) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->pmenu, NULL);
	}
	if (other->pplay == 0 && other->swimenu == 2) {
		sfRenderWindow_clear(text->window, sfBlack);
		sfRenderWindow_drawSprite(text->window, sprite->qmenu, NULL);
	}
	drawgame(text, sprite, other);
	draw_pause(text, sprite, other);
	sfRenderWindow_display(text->window);
}

void destroy2(text* text, sprite* sprite, other* other)
{
	sfSprite_destroy(sprite->menu);
	sfSprite_destroy(sprite->pmenu);
	sfSprite_destroy(sprite->qmenu);
	sfSprite_destroy(sprite->mapbase);
	sfSprite_destroy(sprite->boarhatenter);
	sfSprite_destroy(sprite->boarhatup);
	sfSprite_destroy(sprite->boarhatdown);
	sfSprite_destroy(sprite->map2);
	sfSprite_destroy(sprite->perso);
	sfSprite_destroy(sprite->persoquest);
	sfSprite_destroy(sprite->questex);
	sfSprite_destroy(sprite->options);
}

void destroy(text* text, sprite* sprite, other* other)
{
	destroy2(text, sprite, other);
	sfSprite_destroy(sprite->menup);
	sfSprite_destroy(sprite->menupnew);
	sfSprite_destroy(sprite->menupv);
	sfSprite_destroy(sprite->menuph);
	sfSprite_destroy(sprite->menupq);
	sfSprite_destroy(sprite->mute);
	sfSprite_destroy(sprite->plusless);
	sfSprite_destroy(sprite->nbrsound);
	sfSprite_destroy(sprite->nbrsound2);
	sfSprite_destroy(sprite->nbrsound3);
	sfSprite_destroy(sprite->text);
	sfSprite_destroy(sprite->next);
	sfSprite_destroy(sprite->back);
	sfMusic_destroy(other->music_menu);
	sfMusic_destroy(other->music_game);
	sfRenderWindow_destroy(text->window);
}
