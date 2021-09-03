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
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

void my_putchar(char c);
int my_putstr(char *str);
void putstrcharai(char **map);
int readf(char **navy_map, char *chemin);
void pos_bateaux(char **navy_map, char *stok);
void puttwo(char **navy_map, char *stok);
char *my_strcpy(char *str);
int my_strlen(char *str);
int my_strcmp1(char *s1, char *s2);
int my_getnbr(char *str);
void putthree(char **navy_map, char *stok);
void putfour(char **navy_map, char *stok);
void putfive(char **navy_map, char *stok);
void puttwolines(char *chemin);
void my_put_nbr(int nb);
void getmypid(void);
void connexion(int sig, siginfo_t *info, void *signal);
void empty(void);
void threearg(char *chemin, int pid, int argc, char **argv);
int my_getnbr(char *str);
int verif(char *chemin, int a, int pid);
