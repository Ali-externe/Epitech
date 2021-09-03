/*
** EPITECH PROJECT, 2017
** Task02
** File description:
** my.h
*/
#include <SFML/System.h>
#include <stdlib.h>
#include <unistd.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window/Event.h>
#include <stdlib.h>
#include <stdio.h>
#include "struct.h"


sprite_t texture_sprite(sprite_t display);
window_s window(window_s Wind);
sprite_t texture_sprite(sprite_t display);
Rect_s inirect(Rect_s rect);
Vector_s vector(Vector_s vec);
sprite_t setnrect(sprite_t spt, Rect_s ini);
window_s pos(window_s disp, sprite_t spt);
sprite_t setpos(sprite_t spt, Vector_s iniV);
sprite_t movpos(sprite_t spt, Vector_s iniV);
Vector_t vector2(Vector_t vec2);
sprite_t infinity_prlx(sprite_t spt, Vector_s iniV);
Vector_t get_pos_prlx(sprite_t spt, Vector_t iniV2);
sprite_t reset_prlx(sprite_t spt, Vector_s iniV);
sprite_t reset_prlx2(sprite_t spt, Vector_s iniV);
sprite_t reset_prlx3(sprite_t spt, Vector_s iniV);
sprite_t reset_prlx4(sprite_t spt, Vector_s iniV);
int destroyer(sprite_t spt, window_s disp);
Runner_s setnrectrunner(Runner_s pnj, Rect_s runn);
window_s posrunner(window_s disp, Runner_s pnj);
Runner_s setposrunner(Runner_s pnj, Vector_s iniV);
sprite_t movpos(sprite_t spt, Vector_s iniV);
Runner_s movposrunner(Runner_s pnj, Vector_s iniV);
Runner_s inirunner(Runner_s run);
all_s initializaion(all_s initilizze);
all_s inidisplay(all_s initializze);
int animerunner(Rect_s runn, all_s anime);
Rect_s animationrunner(Rect_s *runaanime);
Runner_s saut(Runner_s *pnj, Rect_s *ini, Vector_s iniV);
Runner_s movposrunner(Runner_s pnj, Vector_s iniV);
Runner_s reset_pics(Runner_s pnj, Vector_s iniV);
Runner_s infinity_pics(Runner_s pnj, Vector_s iniV);
Vector_t get_pos_pics(Runner_s pnj, Vector_t iniV2);
