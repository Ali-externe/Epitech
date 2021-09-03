/*
** EPITECH PROJECT, 2018
** matchstick.c
** File description:
** matchstick
*/

#include "my.h"

int readf(char **navy_map, char *chemin)
{
	int fd = open(chemin, O_RDONLY);
	char *stok = malloc(sizeof(char) * 50);
	char buffer[50];

	read(fd, buffer, 50);
	for (int i = 0,j = 2 ; i < 16; i += 4, j+= 8) {
		stok[i] = buffer[j] - 64;
		stok[i + 1] = buffer[j + 1] - 48;
		stok[i + 2] = buffer[j + 3] - 64;
		stok[i + 3] = buffer[j + 4] - 48;
	}
	pos_bateaux(navy_map, stok);
}

void pos_bateaux(char **navy_map, char *stok)
{
	puttwo(navy_map, stok);
}

void puttwo(char **navy_map, char *stok)
{
	int x = stok[0];
	int y = stok[1];
	int c = stok[2];
	int u = stok[3];

	navy_map[y + 1][(x * 2)] = '2';
	navy_map[u + 1][(c * 2)] = '2';
	putthree(navy_map, stok);
}

void putthree(char **navy_map, char *stok)
{
	int w = stok[4];
	int t = stok[5];
	int g = stok[6];
	int p = stok[7];

	if (t == p) {
		navy_map[t + 1][(w * 2)] = '3';
		navy_map[p + 1][(g * 2)] = '3';
		navy_map[p + 1][(g * 2) - 2] = '3';
	}
	else if (w == g) {
		navy_map[t + 1][(w * 2)] = '3';
		navy_map[p + 1][(g * 2)] = '3';
		navy_map[p][(g * 2)] = '3';
	}
	putfour(navy_map, stok);
}

void putfour(char **navy_map, char *stok)
{
	int x = stok[8];
	int y = stok[9];
	int c = stok[10];
	int u = stok[11];

	if (y == u) {
		navy_map[y + 1][(x * 2)] = '4';
		navy_map[u + 1][(c * 2)] = '4';
		navy_map[u + 1][(c * 2) - 4] = '4';
		navy_map[u + 1][(c * 2) - 2] = '4';
	}
	else if (x == c) {
		navy_map[y + 1][(x * 2)] = '4';
		navy_map[u + 1][(c * 2)] = '4';
		navy_map[u - 1][(c * 2)] = '4';
		navy_map[u][(c * 2)] = '4';
	}
	putfive(navy_map, stok);
}
