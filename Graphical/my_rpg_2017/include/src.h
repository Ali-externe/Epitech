/*
** EPITECH PROJECT, 2018
** src.h
** File description:
** for the norm
*/

#ifndef SRC_H_
#define SRC_H_

#include "ssrc.h"

void init_everything(vect* vect, rect* rect, other* other);
void load_set(text* text, sprite* sprite, rect* rect, vect* vect, other* other);
void beforevent(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void event(text* text, sprite* sprite, vect* vect, rect* rect, other* other);
void draw(text* text, sprite* sprite, other* other);
void destroy(text* text, sprite* sprite, other* other);

#endif
