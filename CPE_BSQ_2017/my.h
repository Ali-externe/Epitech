/*
** EPITECH PROJECT, 2017
** Task02
** File description:
** my.h
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

int my_putchar(char c);
int my_strlen(char const *str);
int my_strlen2(char const *str);
int my_put_nbr(int nb);
int my_height(char const *str);
int transformation(int **cases, char *buffer, int w, int h);
int new_nbr(int **cases, char* buffer, int a, int b);
int find_fsquare(int **cases, char *buffer, pos_b *position);
void filling_x(char *buffer, int bigger, pos_b *position);
int find_square(int **cases, char *buffer, pos_b *position);
int search_square(int **cases, char *buffer, int w, int h);
void display_tab(int **cases, pos_b *position);
int chiffre(char *buffer);
int *wnh(char *buffer);
void affichage(char *buffer);
int zno (int *wh, char *buffer);
