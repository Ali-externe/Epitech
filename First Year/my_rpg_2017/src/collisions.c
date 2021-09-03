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

void open_menu(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (vect->mouse_pos.x >= 0 && vect->mouse_pos.x <= 100 && \
	vect->mouse_pos.y >= 0 && vect->mouse_pos.y <= 100)
		other->pplay = 2;
}

void menu_boxes(text* text, sprite* sprite, vect* vect, other* other)
{
	if (vect->mouse_pos.x >= 0 && vect->mouse_pos.x <= 750 && \
	vect->mouse_pos.y >= 420 && vect->mouse_pos.y <= 620) {
			other->swimenu = 1;
			other->clickboxm = 1;
	}
	else if (vect->mouse_pos.x >= 1070 && vect->mouse_pos.x <= 1920 && \
	vect->mouse_pos.y >= 420 && vect->mouse_pos.y <= 620) {
			other->swimenu = 2;
			other->clickboxm = 2;
	}
	else {
		other->swimenu = 0;
		other->clickboxm = 0;
	}
}


void pause_boxes(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	menu_boxes(text, sprite, vect, other);
	if (vect->mouse_pos.x >= 750 && vect->mouse_pos.x <= 1150 && \
		vect->mouse_pos.y >= 295 && vect->mouse_pos.y <= 430) {
			other->paumenu = 1;
			other->clickboxp = 1;
	}
	else if (vect->mouse_pos.x >= 750 && vect->mouse_pos.x <= 1150 && \
		vect->mouse_pos.y >= 525 && vect->mouse_pos.y <= 660) {
			other->paumenu = 2;
			other->clickboxp = 2;
	}
	else if (vect->mouse_pos.x >= 750 && vect->mouse_pos.x <= 1150 && \
		vect->mouse_pos.y >= 755 && vect->mouse_pos.y <= 890) {
			other->paumenu = 3;
			other->clickboxp = 3;
	}
	else {
		other->paumenu = 0;
		other->clickboxp = 0;
	}
}

void sound_change2(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (vect->mouse_pos.x >= 770 && vect->mouse_pos.x <= 830 && \
	vect->mouse_pos.y >= 634 && vect->mouse_pos.y <= 696) {
		rect->rect_nbrsound3.left = rect->rect_nbrsound3.left - 360;
		if (rect->rect_nbrsound3.left < 0) {
			rect->rect_nbrsound3.left = 720;
			rect->rect_nbrsound2.left = rect->rect_nbrsound2.left - 72;
			if (rect->rect_nbrsound2.left < 0) {
				rect->rect_nbrsound2.left = 720;
				rect->rect_nbrsound.left = rect->rect_nbrsound.left - 72;
			}
		}
		other->changesound = other->changesound - 5;
	}
}

void sound_change(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	sound_change2(text, sprite, vect, rect, other);
	if (vect->mouse_pos.x >= 1095 && vect->mouse_pos.x <= 1155 && \
	vect->mouse_pos.y >= 634 && vect->mouse_pos.y <= 696) {
		rect->rect_nbrsound3.left = rect->rect_nbrsound3.left + 360;
		if (rect->rect_nbrsound3.left > 720) {
			rect->rect_nbrsound3.left = 0;
			rect->rect_nbrsound2.left = rect->rect_nbrsound2.left + 72;
			if (rect->rect_nbrsound2.left > 720) {
				rect->rect_nbrsound2.left = 0;
				rect->rect_nbrsound.left = rect->rect_nbrsound.left + 72;
			}
		}
		other->changesound = other->changesound + 5;
	}
	sfMusic_setVolume(other->music_game, other->changesound);
}

void mute_boxes(text* text, sprite *sprite, vect *vect, rect* rect, other* other)
{
	rect->muterect->left = sfSprite_getPosition(sprite->mute).x;
	rect->muterect->top = sfSprite_getPosition(sprite->mute).y;
	rect->muterect->width = rect->rect_mute.width;
	rect->muterect->height = rect->rect_mute.height;
	if (sfFloatRect_contains(rect->muterect, \
	vect->mouse_pos.x, vect->mouse_pos.y) == 1) {
		if (rect->rect_mute.left == 0) {
			rect->rect_mute.left = 64;
			sfMusic_pause(other->music_game);
		}
		else if (rect->rect_mute.left == 64) {
			rect->rect_mute.left = 0;
			sfMusic_play(other->music_game);
		}
		else if (other->pplay == 0)
			rect->rect_mute.left = 0;
	}
}

void switch_help(text* text, sprite* sprite, vect* vect, other* other)
{
	if (vect->mouse_pos.x >= 1175 && vect->mouse_pos.x <= 1225 && \
	vect->mouse_pos.y >= 850 && vect->mouse_pos.y <= 910) {
		if (other->swihelp == 0)
			other->swihelp = 1;
		else if (other->swihelp == 1)
			other->swihelp = 2;
	}
	if (vect->mouse_pos.x >= 650 && vect->mouse_pos.x <= 700 && \
	vect->mouse_pos.y >= 850 && vect->mouse_pos.y <= 910) {
		if (other->swihelp == 1)
			other->swihelp = 0;
		else if (other->swihelp == 2)
			other->swihelp = 1;
	}

}
