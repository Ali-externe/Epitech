#ifndef _STRUCT_
#define _STRUCT_

typedef struct window_s {
	sfRenderWindow *window;
}window_s;


typedef struct sprite_s {
	sfTexture* Bird;
	sfTexture* FB;
	sfTexture* eximenu;
	sfTexture* score;
	sfTexture* score2;
	sfTexture* score3;
	sfTexture* Dead;
	sfTexture* Cross;
	sfTexture* texture;
	sfSprite* birds;
	sfSprite* Facebook;
	sfSprite* Menu;
	sfSprite* nb;
	sfSprite* nb2;
	sfSprite* pourcentage;
	sfSprite* Bird_dead;
	sfSprite* Hair;
	sfSprite* sprite;
}sprite_t;

typedef struct Rect_s {
	sfIntRect rect;
	sfIntRect Fb;
	sfIntRect numbr1;
	sfIntRect numbr2;
	sfClock *clock;
	sfTime time;
	float seconds;
	float i;
}Rect_s;

typedef struct Rect_t {
	sfIntRect Dead_bird;
	sfIntRect Crosshair;
	sfIntRect prct;
}Rect_t;

typedef struct Vector_s {
	sfVector2f Vector;
	sfVector2f Vectorr;
	sfVector2f dead_vector;
	sfVector2f floor;
	sfVector2f nub_1;
	sfVector2f nub_2;
	sfVector2f menu_position;
	sfVector2f bird_position;
}Vector_s;

typedef struct Vector_t {
	sfVector2f birdinwindow;
	sfVector2f dbirdinwindow;
	sfVector2f Pcross;
	sfVector2f pourcent;
	sfVector2f pos_plouf;
	sfVector2i click_position;
	sfVector2i Mouse_position;
	sfVector2f bird_position_dead;

}Vector_t;

typedef struct var_s {
	int a;
	int e;
	int p;
	int m;
	float angle;
	float anglee;
}var_s;

typedef struct all_s {
	struct window_s disp;
	struct sprite_s spt;
	struct Rect_s ini;
	struct Rect_t ini2;
	struct Vector_s iniV;
	struct Vector_t iniV2;
	struct var_s val;
}all_s;

#endif
