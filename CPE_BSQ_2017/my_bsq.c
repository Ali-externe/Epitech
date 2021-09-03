/*
** EPITECH PROJECT, 2017
** my_popup.c
** File description:
** popup
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "my.h"
#include "struct.h"

int chiffre(char *buffer)
{
	int a = 0;
	a = my_strlen(buffer);
	return(a);
}

int *wnh(char *buffer)
{
	int w = 0;
	int h = 0;
	int *wh;

	w = my_strlen2(buffer);
	h = (my_height(buffer) - 1);
	wh = malloc(sizeof(int) * 2);
	wh[0] = w;
	wh[1] = h;
	return(wh);
}

void affichage(char *buffer)
{
	int a;
	int i;

	a = chiffre(buffer);
	i = (a + 1);
	while(buffer[i] != '\0') {
		my_putchar(buffer[i]);
		i++;
	}
	free(buffer);
}
int zno (int *wh, char *buffer)
{
	int w = wh[0];
	int h = wh[1];
	int r = 0;
	int **cases;
	cases = malloc(sizeof(int *) * (w + 1));
	while(r != w) {
		cases[r] = malloc(sizeof(int) * (h + 1));
		r++;
	}
	transformation(cases, buffer, w, h);
}

int main(int argc, char **argv)
{
	int fd;
	char *buffer;
	int *a;
	struct stat staat;
	if (argc != 2)
		return (84);
	stat(argv[1], &staat);
	fd = open(argv[1], O_RDONLY);
	buffer = malloc(sizeof(char) * (staat.st_size + 1));
	buffer[staat.st_size] = 0;
	read(fd, buffer, staat.st_size);
	a = malloc(sizeof(int) * 2);
	a = wnh(buffer);
	zno(a, buffer);
}
