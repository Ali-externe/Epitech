/*
** EPITECH PROJECT, 2018
** struct.h
** File description:
** structs
*/

typedef struct text text;
struct text
{
	int width;
	int height;
	sfVideoMode video_mode;
	sfRenderWindow* window;

	sfTexture* tx_menu;
	sfTexture* tx_pmenu;
	sfTexture* tx_qmenu;
	sfTexture* tx_mapbase;
	sfTexture* tx_boarhatenter;
	sfTexture* tx_boarhatup;
	sfTexture* tx_boarhatdown;
	sfTexture* tx_map2;
	sfTexture* tx_perso;
	sfTexture* tx_persoquest;
	sfTexture* tx_questex;
	sfTexture* tx_options;
	sfTexture* tx_menup;
	sfTexture* tx_menupnew;
	sfTexture* tx_menupv;
	sfTexture* tx_mute;
	sfTexture* tx_plusless;
	sfTexture* tx_nbrsound;
	sfTexture* tx_nbrsound2;
	sfTexture* tx_nbrsound3;
	sfTexture* tx_menuph;
	sfTexture* tx_text;
	sfTexture* tx_next;
	sfTexture* tx_back;
	sfTexture* tx_menupq;
	sfView* view;
};

typedef struct sprite sprite;
struct sprite
{
	sfSprite* menu;
	sfSprite* pmenu;
	sfSprite* qmenu;
	sfSprite* mapbase;
	sfSprite* boarhatenter;
	sfSprite* boarhatup;
	sfSprite* boarhatdown;
	sfSprite* map2;
	sfSprite* perso;
	sfSprite* persoquest;
	sfSprite* questex;
	sfSprite* options;
	sfSprite* menup;
	sfSprite* menupnew;
	sfSprite* menupv;
	sfSprite* mute;
	sfSprite* plusless;
	sfSprite* nbrsound;
	sfSprite* nbrsound2;
	sfSprite* nbrsound3;
	sfSprite* menuph;
	sfSprite* text;
	sfSprite* next;
	sfSprite* back;
	sfSprite* menupq;
};

typedef struct vect vect;
struct vect
{
	sfVector2i mouse_pos;
	sfVector2f pos_rpwnhouse;
	sfVector2f pos_rpwnboarhat;
	sfVector2f pos_rpwnsidemap0;
	sfVector2f pos_rpwnsidemap2;
	sfVector2f pos_boarhatup;
	sfVector2f pos_boarhatdown;
	sfVector2f mv_r_perso;
	sfVector2f mv_l_perso;
	sfVector2f mv_t_perso;
	sfVector2f mv_b_perso;
	sfVector2f pos_perso;
	sfVector2f perso_pos;
	sfVector2f pos_persoquest;
	sfVector2f pos_questex;
	sfVector2f scale;
	sfVector2f pos_option;
	sfVector2f pos_mute;
	sfVector2f pos_plusless;
	sfVector2f pos_nbrsound;
	sfVector2f pos_nbrsound2;
	sfVector2f pos_nbrsound3;
	sfVector2f pos_next;
	sfVector2f pos_back;
};

typedef struct rect rect;
struct rect
{
	sfIntRect rect_perso;
	sfIntRect rect_options;
	sfIntRect rect_mute;
	sfIntRect rect_nbrsound;
	sfIntRect rect_nbrsound2;
	sfIntRect rect_nbrsound3;
	sfFloatRect* muterect;
};

typedef struct other other;
struct other
{
	sfEvent event;
	sfMusic* music_menu;
	sfMusic* music_game;
	sfClock* clock;
	sfClock* clock2;
	sfTime time;
	sfTime time2;
	int cb;
	int i;
	int pplay;
	int swimap;
	int swimenu;
	int paumenu;
	int swihelp;
	int clickboxm;
	int clickboxp;
	int elapsed;
	int changesound;
	int key;
	int up;
	int down;
	int right;
	int left;
	float x, y;
	float seconds;
	float seconds2;
};
