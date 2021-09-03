/*
** EPITECH PROJECT, 2018
** ssrc
** File description:
** ssrc
*/

#ifndef SSRC_H_
#define SSRC_H_

void anim_up(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void anim_down(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void anim_right(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void anim_left(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void anim_horizontal(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void event_boxmenu(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void event_boxpause(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void key_pressed(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void open_menu(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void menu_boxes(text* text, sprite* sprite, vect* vect, other* other);
void pause_boxes(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void sound_change(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void mute_boxes(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void switch_help(text* text, sprite* sprite, vect* vect, other* other);
void draw_pause(text* text, sprite* sprite, other* other);

#endif
