/*
** EPITECH PROJECT, 2018
** beforevent.c
** File description:
** before events
*/

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/my.h"

void set_textrect(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	sfRenderWindow_setFramerateLimit(text->window, 160);
	sfSprite_setTextureRect(sprite->perso, rect->rect_perso);
	sfSprite_setTextureRect(sprite->options, rect->rect_options);
	sfSprite_setTextureRect(sprite->mute, rect->rect_mute);
	sfSprite_setTextureRect(sprite->nbrsound, rect->rect_nbrsound);
	sfSprite_setTextureRect(sprite->nbrsound2, rect->rect_nbrsound2);
	sfSprite_setTextureRect(sprite->nbrsound3, rect->rect_nbrsound3);
	vect->perso_pos = sfSprite_getPosition(sprite->perso);
	other->time = sfClock_getElapsedTime(other->clock);
	other->seconds = other->time.microseconds / 1000000.0;
}

void anim_vertical(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->key == 4) {
		if (other->seconds > 0.02) {
			other->up++;
			anim_up(text, sprite, vect, rect, other);
			sfClock_restart(other->clock);
		}
	}
	if (other->key == 1) {
		if (other->seconds > 0.02) {
			other->down++;
			anim_down(text, sprite, vect, rect, other);
			sfClock_restart(other->clock);
		}
	}
	anim_horizontal(text, sprite, vect, rect, other);
}

void move_map1(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	anim_vertical(text, sprite, vect, rect, other);
	if (sfKeyboard_isKeyPressed(sfKeyS) && (sfSprite_getPosition(sprite->perso).y < 1000)) {
		other->key = 4;
		sfSprite_move(sprite->perso, vect->mv_t_perso);
		rect->rect_perso.top = 150;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyZ) && (sfSprite_getPosition(sprite->perso).y > 0)) {
		other->key = 1;
		sfSprite_move(sprite->perso, vect->mv_b_perso);
		rect->rect_perso.top = 0;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyQ) && (sfSprite_getPosition(sprite->perso).x > 550)) {
		other->key = 2;
		sfSprite_move(sprite->perso, vect->mv_r_perso);
		rect->rect_perso.top = 75;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyD)) {
		other->key = 3;
		sfSprite_move(sprite->perso, vect->mv_l_perso);
		rect->rect_perso.top = 225;
	}
	else
		rect->rect_perso.left = 0;
}

void move_boarhatenter(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	anim_vertical(text, sprite, vect, rect, other);
	if (sfKeyboard_isKeyPressed(sfKeyS) && (sfSprite_getPosition(sprite->perso).y < 970)) {
		other->key = 4;
		sfSprite_move(sprite->perso, vect->mv_t_perso);
		rect->rect_perso.top = 150;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyZ) && (sfSprite_getPosition(sprite->perso).y > 240)) {
		other->key = 1;
		sfSprite_move(sprite->perso, vect->mv_b_perso);
		rect->rect_perso.top = 0;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyQ) && (sfSprite_getPosition(sprite->perso).x > 350)) {
		other->key = 2;
		sfSprite_move(sprite->perso, vect->mv_r_perso);
		rect->rect_perso.top = 75;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyD) && (sfSprite_getPosition(sprite->perso).x < 1555)) {
		other->key = 3;
		sfSprite_move(sprite->perso, vect->mv_l_perso);
		rect->rect_perso.top = 225;
	}
	else
		rect->rect_perso.left = 0;
}

void move_map2(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	anim_vertical(text, sprite, vect, rect, other);
	if (sfKeyboard_isKeyPressed(sfKeyS) && (sfSprite_getPosition(sprite->perso).y < 1000)) {
		other->key = 4;
		sfSprite_move(sprite->perso, vect->mv_t_perso);
		rect->rect_perso.top = 150;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyZ) && (sfSprite_getPosition(sprite->perso).y > 0)) {
		other->key = 1;
		sfSprite_move(sprite->perso, vect->mv_b_perso);
		rect->rect_perso.top = 0;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyQ)) {
		other->key = 2;
		sfSprite_move(sprite->perso, vect->mv_r_perso);
		rect->rect_perso.top = 75;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyD) && (sfSprite_getPosition(sprite->perso).x < 1870)) {
		other->key = 3;
		sfSprite_move(sprite->perso, vect->mv_l_perso);
		rect->rect_perso.top = 225;
	}
	else
		rect->rect_perso.left = 0;
}

void changemap(sprite* sprite, vect* vect, other* other)
{
	if (other->pplay == 1 && other->swimap == 0) {
		if (vect->perso_pos.x >= 1920) {
			other->swimap = 2;
			sfSprite_setPosition(sprite->perso, vect->pos_rpwnsidemap0);
		}
	}
	if (other->pplay == 1 && other->swimap == 2) {
		if (vect->perso_pos.x < 0) {
			other->swimap = 0;
			sfSprite_setPosition(sprite->perso, vect->pos_rpwnsidemap2);
		}
	}
}

void key_moveperso(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->pplay == 1 && other->swimap == 0)
		move_map1(text, sprite, vect, rect, other);
	if (other->pplay == 1 && other->swimap == 1)
		move_boarhatenter(text, sprite, vect, rect, other);
	if (other->pplay == 1 && other->swimap == 2)
		move_map2(text, sprite, vect, rect, other);
}

void colli_boarhat(vect* vect, other* other)
{
	if (other->pplay == 1 && other->swimap == 0) {
		if (vect->perso_pos.x >= 790 && vect->perso_pos.x <= 1100 && \
		vect->perso_pos.y >= 400 && vect->perso_pos.y <= 500) {
			if (sfKeyboard_isKeyPressed(sfKeyQ))
				vect->mv_r_perso.x = 0;
			if (sfKeyboard_isKeyPressed(sfKeyZ))
				vect->mv_b_perso.y = 0;
			if (sfKeyboard_isKeyPressed(sfKeyD))
				vect->mv_l_perso.x = 0;
		}
		else {
			vect->mv_r_perso.x = -2;
			vect->mv_b_perso.y = -2;
			vect->mv_l_perso.x = 2;
		}
	}
}

void colli_house(sprite* sprite, vect* vect, other* other)
{
	if (other->pplay == 1 && other->swimap == 0) {
		if (vect->perso_pos.x >= 920 && vect->perso_pos.x <= 980 && \
		vect->perso_pos.y >= 480 && vect->perso_pos.y <= 520) {
			other->swimap = 1;
			sfSprite_setPosition(sprite->perso, vect->pos_rpwnhouse);
		}
	}
	if (other->pplay == 1 && other->swimap == 1) {
		if (vect->perso_pos.x >= 940 && vect->perso_pos.x <= 980 && \
		vect->perso_pos.y >= 960 && vect->perso_pos.y <= 980) {
			other->swimap = 0;
			sfSprite_setPosition(sprite->perso, vect->pos_rpwnboarhat);
		}
	}
}

void beforevent(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->pplay == 0)
		rect->rect_mute.left = 0;
	set_textrect(text, sprite, vect, rect, other);
	changemap(sprite, vect, other);
	key_moveperso(text, sprite, vect, rect, other);
	colli_boarhat(vect, other);
	colli_house(sprite, vect, other);
}
