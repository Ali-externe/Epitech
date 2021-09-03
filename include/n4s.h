/*
** EPITECH PROJECT, 2018
** n4s
** File description:
** n4s.h
*/

#ifndef _MY_
#define _MY_

#include "struct.h"

int my_putstr(char *str);
char **pars(char *line);
void my_putchar(char c);
int my_strcp(char *stra, char *strb);
int check_victory(line_save_t *ls);
void exec_command(char *command, line_save_t *ls);

#endif
