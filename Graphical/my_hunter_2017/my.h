/*
** EPITECH PROJECT, 2018
** Task02
** File description:
** my.h
*/
#include <SFML/System.hpp>
#include <stdlib.h>
#include <unistd.h>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <stdlib.h>
#include <stdio.h>
#include "struct.h"


sprite_t texture_sprite(sprite_t display);
window_s window(window_s Wind);
sprite_t texture_sprite(sprite_t display);
Rect_s inirect(Rect_s rect);
Rect_t inirect2(Rect_t rectt);
Vector_s vector(Vector_s vec);
Vector_t vector2(Vector_t vec2);
var_s variables(var_s var);
sprite_t SetnRect(sprite_t spt, Rect_s ini, Rect_t ini2);
window_s pos(window_s disp, sprite_t spt);
all_s game(all_s initializze, sfMusic *Zbeub);
all_s optiongame(all_s initializze, sfMusic *Zbeub);
Rect_s animation(Rect_s *initializze);
all_s menu(all_s initializze);
all_s inidisplay(all_s initializze);
sprite_t setpos(sprite_t spt, Vector_s iniV, Vector_t iniV2);
sprite_t set_plouf(window_s disp, sprite_t spt, Vector_t iniV2);
void destroyer(all_s initializze);
all_s inidisplay2(all_s initializze);
all_s inidisplay3(all_s initializze);
all_s deadbird(all_s initializze, sfMusic *Zbeub);
all_s posdead(all_s initializze, sfMusic *Zbeub);
void help(char *str);
void explication(void);
int my_putstr(char *str);
void my_putchar(char c);
void execution(void);
all_s madezeros(all_s initializze);
