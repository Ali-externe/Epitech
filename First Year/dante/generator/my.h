/*
** EPITECH PROJECT, 2018
** Task02
** File description:
** my.h
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>

char **my_calloc(char **str, int a, int w);
int my_getnbr(char *str);
char **create_base_map(int h, int w);
int check_next_star(char **map, int a, int b, int *wh);
char **create_bad_path(char **map, int a, int b, int *wh);
char **bad_path(char **map, int h, int w, int *wh);
char **left_of_past_r(char **map, int a, int b, int *wh);
void my_putstr(char *str);
int my_strlen(char *str);
char **perfect_map(int w, int h);
char **generate_path_perfect(int h, int w, char **map);
char **make_doors_perfect(int h, int w, char **map);
