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
#include <string.h>

char *my_strcpy(char *str);
int my_strlen(char *str);
char **solve(char **map);
int my_height(char **str);
char **check_diff_path(char **map, int a, int b, int *wh);
char **best_path(char **map, int *wh);
char **check_pos(char **map, int *wh , int a, int b);
char **finale(char **map, int *wh);
