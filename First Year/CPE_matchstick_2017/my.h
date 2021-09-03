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
#include "gnl.h"

int my_strcmp1(char *s1, char *s2);
int my_getnbr(char *str);
int createmap(int *wh);
int my_strlen(char *str);
int my_putstr(char *str);
void my_putchar(char c);
int choise(char **map, int *wh);
int my_put_nbr(int nb);
int my_strlen2(char **str, int *wh);
int my_strlen3(char **map, int line);
int my_strlen4(char **map, int line, int *wh);
int putstrchar(char **map, int *wh);
int my_robot(char **map, int *wh);
int get_width(int *wh);
int aidelsticks(char **map, int ailine, int aimatch, int *wh);
int delaisticks(char **map, int ailine, int aimatch, int *wh);
int my_robot(char **map, int *wh);
int putstrcharai(char **map, int *wh);
int delsticks(char **map, int line, int hmsticks, int *wh);
int verifend(char **map, int line, int hmsticks, int *wh);
int verif2(char **map, int hmsticks, int line, int *wh);
int com2(char **map, int line, char *hms, int *wh);
int putsticks(char **map, int *wh);
char get_next_line_char(int);
char *get_next_line(int);
int my_strlen7(char *);
