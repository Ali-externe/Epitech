/*
** EPITECH PROJECT, 2018
** init_everything.c
** File description:
** init all
*/

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "../include/my.h"

void init_vect3(vect* vect)
{
	vect->pos_rpwnhouse.x = 950;
	vect->pos_rpwnhouse.y = 930;
	vect->pos_rpwnboarhat.x = 930;
	vect->pos_rpwnboarhat.y = 550;
	vect->pos_rpwnsidemap0.x = 0;
	vect->pos_rpwnsidemap0.y = 790;
	vect->pos_rpwnsidemap2.x = 1870;
	vect->pos_rpwnsidemap2.y = 790;
	vect->pos_boarhatup.x = 820;
	vect->pos_boarhatup.y = 120;
	vect->pos_boarhatdown.x = 840;
	vect->pos_boarhatdown.y = 489;
	vect->mv_r_perso.x = -2;
	vect->mv_r_perso.y = 0;
	vect->mv_l_perso.x = 2;
	vect->mv_l_perso.y = 0;
	vect->mv_t_perso.x = 0;
	vect->mv_t_perso.y = 2;
	vect->mv_b_perso.x = 0;
	vect->mv_b_perso.y = -2;
}

void init_vect2(vect* vect)
{
	vect->pos_perso.x = 930;
	vect->pos_perso.y = 640;
	vect->pos_persoquest.x = 947;
	vect->pos_persoquest.y = 215;
	vect->pos_questex.x = 985;
	vect->pos_questex.y = 190;
	vect->perso_pos.x = 0;
	vect->perso_pos.y = 0;
	vect->scale.x = 0.5;
	vect->scale.y = 0.5;
	vect->pos_option.x = 0;
	vect->pos_option.y = 0;
	vect->pos_mute.x = 930;
	vect->pos_mute.y = 430;
}

void init_vect(vect* vect)
{
	init_vect3(vect);
	init_vect2(vect);
	vect->pos_mute.y = 430;
	vect->pos_plusless.x = 770;
	vect->pos_plusless.y = 635;
	vect->pos_nbrsound.x = 865;
	vect->pos_nbrsound.y = 720;
	vect->pos_nbrsound2.x = 930;
	vect->pos_nbrsound2.y = 720;
	vect->pos_nbrsound3.x = 995;
	vect->pos_nbrsound3.y = 720;
	vect->pos_next.x = 1175;
	vect->pos_next.y = 850;
	vect->pos_back.x = 650;
	vect->pos_back.y = 850;
}

void init_rect2(rect* rect)
{
	rect->rect_perso.left = 10;
	rect->rect_perso.top = 150;
	rect->rect_perso.width = 64;
	rect->rect_perso.height = 75;
	rect->rect_options.left = 0;
	rect->rect_options.top = 0;
	rect->rect_options.width = 200;
	rect->rect_options.height = 200;
	rect->rect_mute.left = 0;
	rect->rect_mute.top = 0;
	rect->rect_mute.width = 64;
	rect->rect_mute.height = 64;
}

void init_rect(rect* rect)
{
	init_rect2(rect);
	rect->rect_nbrsound.left = 0;
        rect->rect_nbrsound.top = 0;
        rect->rect_nbrsound.width = 72;
        rect->rect_nbrsound.height = 77;
	rect->rect_nbrsound2.left = 360;
        rect->rect_nbrsound2.top = 0;
        rect->rect_nbrsound2.width = 72;
        rect->rect_nbrsound2.height = 77;
	rect->rect_nbrsound3.left = 0;
        rect->rect_nbrsound3.top = 0;
        rect->rect_nbrsound3.width = 72;
        rect->rect_nbrsound3.height = 77;
	rect->muterect = malloc(sizeof(sfFloatRect));
}

void init_other(rect* rect, other* other)
{
	other->cb = 0;
	other->i = 0;
	other->pplay = 0;
	other->swimap = 0;
	other->swimenu = 0;
	other->paumenu = 0;
	other->swihelp = 0;
	other->clickboxm = 0;
	other->clickboxp = 0;
	other->key = 0;
	other->up = 0;
	other->down = 0;
	other->right = 0;
	other->left = 0;
	other->elapsed = 0;
	other->changesound = 50;
	other->music_menu = sfMusic_createFromFile("ressources/Musics/musicmenu.ogg");
	other->music_game = sfMusic_createFromFile("ressources/Musics/musicgame.ogg");
	other->clock = sfClock_create();
	if (other->pplay == 0)
		sfMusic_play(other->music_menu);
}

void init_everything(vect* vect, rect* rect, other* other)
{
	init_vect(vect);
	init_rect(rect);
	init_other(rect, other);
}
