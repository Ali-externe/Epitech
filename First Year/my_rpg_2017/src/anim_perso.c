/*
** EPITECH PROJECT, 2018
** anim_vertical.c
** File description:
** anim up and down
*/

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/my.h"

void anim_up(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->up == 1)
		rect->rect_perso.left = 63;
	if (other->up == 2)
		rect->rect_perso.left = 127;
	if (other->up == 3)
		rect->rect_perso.left = 191;
	if (other->up == 4)
		rect->rect_perso.left = 255;
	if (other->up == 5)
		rect->rect_perso.left = 319;
	if (other->up == 6)
		rect->rect_perso.left = 383;
	if (other->up == 7)
		rect->rect_perso.left = 447;
	if (other->up == 8) {
		rect->rect_perso.left = 511;
		other->up = 0;
	}
}

void anim_down(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->down == 1)
		rect->rect_perso.left = 63;
	if (other->down == 2)
		rect->rect_perso.left = 127;
	if (other->down == 3)
		rect->rect_perso.left = 191;
	if (other->down == 4)
		rect->rect_perso.left = 255;
	if (other->down == 5)
		rect->rect_perso.left = 319;
	if (other->down == 6)
		rect->rect_perso.left = 383;
	if (other->down == 7)
		rect->rect_perso.left = 447;
	if (other->down == 8) {
		rect->rect_perso.left = 511;
		other->down = 0;
	}
}

void anim_right(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->right == 1)
		rect->rect_perso.left = 63;
	if (other->right == 2)
		rect->rect_perso.left = 127;
	if (other->right == 3)
		rect->rect_perso.left = 191;
	if (other->right == 4)
		rect->rect_perso.left = 255;
	if (other->right == 5)
		rect->rect_perso.left = 319;
	if (other->right == 6)
		rect->rect_perso.left = 383;
	if (other->right == 7)
		rect->rect_perso.left = 447;
	if (other->right == 8) {
		rect->rect_perso.left = 511;
		other->right = 0;
	}
}

void anim_left(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->left == 1)
		rect->rect_perso.left = 63;
	if (other->left == 2)
		rect->rect_perso.left = 127;
	if (other->left == 3)
		rect->rect_perso.left = 191;
	if (other->left == 4)
		rect->rect_perso.left = 255;
	if (other->left == 5)
		rect->rect_perso.left = 319;
	if (other->left == 6)
		rect->rect_perso.left = 383;
	if (other->left == 7)
		rect->rect_perso.left = 447;
	if (other->left == 8) {
		rect->rect_perso.left = 511;
		other->left = 0;
	}
}

void anim_horizontal(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->key == 2) {
		if (other->seconds > 0.04) {
			other->right++;
			anim_right(text, sprite, vect, rect, other);
			sfClock_restart(other->clock);
		}
	}
	if (other->key == 3) {
		if (other->seconds > 0.04) {
			other->left++;
			anim_left(text, sprite, vect, rect, other);
			sfClock_restart(other->clock);
		}
	}
}
