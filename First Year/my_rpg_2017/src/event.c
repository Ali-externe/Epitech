/*
** EPITECH PROJECT, 2018
** event.c
** File description:
** handle events
*/

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/my.h"

void event_boxmenu(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->pplay == 0) {
		if (other->clickboxm == 1) {
			if (sfMouse_isButtonPressed(sfMouseLeft)) {
				other->pplay = 1;
				sfMusic_pause(other->music_menu);
				sfMusic_stop(other->music_menu);
				sfMusic_play(other->music_game);
			}
		}
		if (other->clickboxm == 2) {
			if (sfMouse_isButtonPressed(sfMouseLeft))
				sfRenderWindow_close(text->window);
		}
	}
}

void event_boxpause(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->pplay == 1) {
		open_menu(text, sprite, vect, rect, other);
	}
	if (other->pplay == 2) {
		if (other->clickboxp == 1)
			other->pplay = 3;
		if (other->clickboxp == 2)
			other->pplay = 4;
		if (other->clickboxp == 3) {
			other->pplay = 0;
			sfMusic_pause(other->music_game);
			sfMusic_stop(other->music_game);
			sfMusic_play(other->music_menu);
		}
	}
	if (other->pplay == 3) {
		mute_boxes(text, sprite, vect, rect, other);
		sound_change(text, sprite, vect, rect, other);
	}
	if (other->pplay == 4)
		switch_help(text, sprite, vect, other);
}

void key_pressed(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	if (other->pplay == 1) {
		if (other->event.key.code == sfKeyEscape)
			other->pplay = 2;
	}
	else if (other->pplay == 2) {
		if (other->event.key.code == sfKeyEscape)
			other->pplay = 1;
	}
	else if (other->pplay == 3) {
		if (other->event.key.code == sfKeyEscape)
			other->pplay = 2;
	}
	else if (other->pplay == 4) {
		if (other->event.key.code == sfKeyEscape) {
			other->pplay = 2;
			other->swihelp = 0;
		}
	}
	if (other->event.key.code == sfKeyF11)
		sfRenderWindow_close(text->window);
}

void event(text* text, sprite* sprite, vect* vect, rect* rect, other* other)
{
	vect->mouse_pos = sfMouse_getPositionRenderWindow(text->window);
	while (sfRenderWindow_pollEvent(text->window, &other->event)) {
		if (other->event.type == sfEvtMouseButtonPressed) {
			event_boxmenu(text, sprite, vect, rect, other);
			event_boxpause(text, sprite, vect, rect, other);
		}
		if (other->event.type == sfEvtKeyPressed)
			key_pressed(text, sprite, vect, rect, other);
	}
	pause_boxes(text, sprite, vect, rect, other);
}
