/*
** EPITECH PROJECT, 2018
** load_set.c
** File description:
** load and set sprites or textures
*/

#include <stdio.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include "../include/my.h"

void load_texture2(text* text, rect* rect)
{
	text->tx_menup = sfTexture_createFromFile("ressources/MENU_PAUSE.jpg", NULL);
	text->tx_menupnew = sfTexture_createFromFile("ressources/MENU_PAUSE_NEW.jpg", NULL);
	text->tx_menupv = sfTexture_createFromFile("ressources/MENU_PAUSE_VOLUME_V2.png", NULL);
	text->tx_menuph = sfTexture_createFromFile("ressources/MENU_PAUSE_HELP_V2.png", NULL);
	text->tx_menupq = sfTexture_createFromFile("ressources/MENU_PAUSE_QUIT_V2.png", NULL);
	text->tx_mute = sfTexture_createFromFile("ressources/mute.png", NULL);
	text->tx_plusless = sfTexture_createFromFile("ressources/plusless2.png", NULL);
	text->tx_nbrsound = sfTexture_createFromFile("ressources/Volume.png", NULL);
	text->tx_nbrsound2 = sfTexture_createFromFile("ressources/Volume.png", NULL);
	text->tx_nbrsound3 = sfTexture_createFromFile("ressources/Volume.png", NULL);
	text->tx_text = sfTexture_createFromFile("ressources/helptools1.png", NULL);
	text->tx_next = sfTexture_createFromFile("ressources/next1.png", NULL);
	text->tx_back = sfTexture_createFromFile("ressources/back1.png", NULL);
}

void load_texture(text* text, rect* rect)
{
	text->video_mode.width = 1920;
	text->video_mode.height = 1080;
	text->video_mode.bitsPerPixel = 32;
	text->window = sfRenderWindow_create (text->video_mode, "MyFuß", sfFullscreen, NULL);
	text->tx_menu = sfTexture_createFromFile("ressources/MENU_GAME.jpg", NULL);
	text->tx_pmenu = sfTexture_createFromFile("ressources/MENU_PLAY.jpg", NULL);
	text->tx_qmenu = sfTexture_createFromFile("ressources/MENU_QUIT.jpg", NULL);
	text->tx_mapbase = sfTexture_createFromFile("ressources/map-1.jpg", NULL);
	text->tx_boarhatenter = sfTexture_createFromFile("ressources/inside-house.png", NULL);
	text->tx_boarhatup = sfTexture_createFromFile("ressources/toit-maison.png", NULL);
	text->tx_boarhatdown = sfTexture_createFromFile("ressources/base-maison.png", NULL);
	text->tx_map2 = sfTexture_createFromFile("ressources/map-2.jpg", NULL);
	text->tx_perso = sfTexture_createFromFile("ressources/meliodas.png", NULL);
	text->tx_persoquest = sfTexture_createFromFile("ressources/manquest2.png", NULL);
	text->tx_questex = sfTexture_createFromFile("ressources/quest!.png", NULL);
	text->tx_options = sfTexture_createFromFile("ressources/openoptions.png", NULL);
	load_texture2(text, rect);
}


void load_sprite2(sprite* sprite)
{
	sprite->menup = sfSprite_create();
	sprite->menupnew = sfSprite_create();
	sprite->menupv = sfSprite_create();
	sprite->menuph = sfSprite_create();
	sprite->menupq = sfSprite_create();
	sprite->mute = sfSprite_create();
	sprite->plusless = sfSprite_create();
	sprite->nbrsound = sfSprite_create();
	sprite->nbrsound2 = sfSprite_create();
	sprite->nbrsound3 = sfSprite_create();
	sprite->text = sfSprite_create();
	sprite->next = sfSprite_create();
	sprite->back = sfSprite_create();
}

void load_sprite(sprite* sprite)
{
	sprite->menu = sfSprite_create();
	sprite->pmenu = sfSprite_create();
	sprite->qmenu = sfSprite_create();
	sprite->mapbase = sfSprite_create();
	sprite->boarhatenter = sfSprite_create();
	sprite->boarhatup = sfSprite_create();
	sprite->boarhatdown = sfSprite_create();
	sprite->map2 = sfSprite_create();
	sprite->perso = sfSprite_create();
	sprite->persoquest = sfSprite_create();
	sprite->questex = sfSprite_create();
	sprite->options = sfSprite_create();
	load_sprite2(sprite);
}


void set_text2(text* text, sprite* sprite)
{
	sfSprite_setTexture(sprite->menup, text->tx_menup, sfTrue);
	sfSprite_setTexture(sprite->menupnew, text->tx_menupnew, sfTrue);
	sfSprite_setTexture(sprite->menupv, text->tx_menupv, sfTrue);
	sfSprite_setTexture(sprite->menuph, text->tx_menuph, sfTrue);
	sfSprite_setTexture(sprite->menupq, text->tx_menupq, sfTrue);
	sfSprite_setTexture(sprite->mute, text->tx_mute, sfTrue);
	sfSprite_setTexture(sprite->plusless, text->tx_plusless, sfTrue);
	sfSprite_setTexture(sprite->nbrsound, text->tx_nbrsound, sfTrue);
	sfSprite_setTexture(sprite->nbrsound2, text->tx_nbrsound2, sfTrue);
	sfSprite_setTexture(sprite->nbrsound3, text->tx_nbrsound3, sfTrue);
	sfSprite_setTexture(sprite->text, text->tx_text, sfTrue);
	sfSprite_setTexture(sprite->next, text->tx_next, sfTrue);
	sfSprite_setTexture(sprite->back, text->tx_back, sfTrue);
}

void set_text(text* text, sprite* sprite)
{
	sfSprite_setTexture(sprite->menu, text->tx_menu, sfTrue);
	sfSprite_setTexture(sprite->pmenu, text->tx_pmenu, sfTrue);
	sfSprite_setTexture(sprite->qmenu, text->tx_qmenu, sfTrue);
	sfSprite_setTexture(sprite->mapbase, text->tx_mapbase, sfTrue);
	sfSprite_setTexture(sprite->boarhatenter, text->tx_boarhatenter, sfTrue);
	sfSprite_setTexture(sprite->boarhatup, text->tx_boarhatup, sfTrue);
	sfSprite_setTexture(sprite->boarhatdown, text->tx_boarhatdown, sfTrue);
	sfSprite_setTexture(sprite->map2, text->tx_map2, sfTrue);
	sfSprite_setTexture(sprite->perso, text->tx_perso, sfTrue);
	sfSprite_setTexture(sprite->persoquest, text->tx_persoquest, sfTrue);
	sfSprite_setTexture(sprite->questex, text->tx_questex, sfTrue);
	sfSprite_setTexture(sprite->options, text->tx_options, sfTrue);
	set_text2(text, sprite);
}

void set_pos(sprite* sprite, vect* vect, other* other)
{
	sfSprite_setScale(sprite->options, vect->scale);
	sfSprite_setPosition(sprite->boarhatup, vect->pos_boarhatup);
	sfSprite_setPosition(sprite->boarhatdown, vect->pos_boarhatdown);
	sfSprite_setPosition(sprite->perso, vect->pos_perso);
	sfSprite_setPosition(sprite->persoquest, vect->pos_persoquest);
	sfSprite_setPosition(sprite->questex, vect->pos_questex);
	sfSprite_setPosition(sprite->options, vect->pos_option);
	sfSprite_setPosition(sprite->mute, vect->pos_mute);
	sfSprite_setPosition(sprite->plusless, vect->pos_plusless);
	sfSprite_setPosition(sprite->nbrsound, vect->pos_nbrsound);
	sfSprite_setPosition(sprite->nbrsound2, vect->pos_nbrsound2);
	sfSprite_setPosition(sprite->nbrsound3, vect->pos_nbrsound3);
	sfSprite_setPosition(sprite->next, vect->pos_next);
	sfSprite_setPosition(sprite->back, vect->pos_back);
}

void load_set(text* text, sprite* sprite, rect* rect, vect* vect, other* other)
{
	load_texture(text, rect);
	load_sprite(sprite);
	set_text(text, sprite);
	set_pos(sprite, vect, other);
}
