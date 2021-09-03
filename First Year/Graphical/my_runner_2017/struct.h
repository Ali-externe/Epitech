#ifndef _STRUCT_
#define _STRUCT_

typedef struct window_s {
	sfRenderWindow *window;
}window_s;


typedef struct sprite_s {
	sfTexture* b1;
	sfTexture* b2;
	sfTexture* b3;
	sfTexture* b4;
	sfTexture* b6;
	sfTexture* b7;
	sfSprite* bg1;
	sfSprite* bg2;
	sfSprite* bg3;
	sfSprite* bg4;
	sfSprite* bg6;
	sfSprite* bg7;
}sprite_t;

typedef struct Runner_s {
	sfTexture* theheros;
	sfSprite* heros;
	sfTexture* obst;
	sfSprite* obstacle;
}Runner_s;

typedef struct Rect_s {
	sfIntRect background;
	sfIntRect Runner;
	sfClock *clock;
	sfClock *clockjump;
	sfTime time;
	sfTime timejump;
	float seconds;
	float secondsjump;
	int a;
}Rect_s;

typedef struct Vector_s {
	sfVector2f Vectorr;
	sfVector2f Vector1;
	sfVector2f Vector2;
	sfVector2f Vector3;
	sfVector2f Vector4;
	sfVector2f Vectoru;
	sfVector2f Vectors;
	sfVector2f Vectorss;
	sfVector2f Vectorj;
	sfVector2f Vectord;
	sfVector2f pic;
	sfVector2f scal;
}Vector_s;

typedef struct Vector_t {
	sfVector2f parlx1;
	sfVector2f parlx2;
	sfVector2f parlx3;
	sfVector2f parlx4;
	sfVector2f parlx6;
	sfVector2f infpics;
}Vector_t;

typedef struct all_s {
	struct window_s disp;
	struct sprite_s spt;
	struct Runner_s pnj;
	struct Rect_s ini;
	struct Vector_s iniV;
	struct Vector_t vect;

}all_s;

#endif
