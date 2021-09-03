#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include "struct.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#ifndef __MY_H__
#define __MY_H__

int my_strlen(char *str);
char *my_strcpy(char *str);
int my_strcmp(char *str1, char *str2);
int my_putstr(char *str);
char *get_next_line(int fd);
void my_putchar(char c);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
char **beautiful_info(char **info);
int check_minus(char *str);
int verif_comment(char *str);
char *my_strcpy_spe(char *str);
void next_info(char **full, int i, int j, char **info);
void for_20_lines_norm(char **full, char **info);

#endif
