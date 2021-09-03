/*
** EPITECH PROJECT, 2017
** my_algo.c
** File description:
** algo
*/
#include <stdlib.h>
#include "my.h"
#include "struct.h"

int transformation(int **cases, char *buffer, int w, int h)
{
	int a = 0;
	int b = 0;
	int p = 0;
	int e = 0;
	while(buffer[p] != '\0' && a != h) {
		if(buffer[p] == '.') {
			cases[a][b] = 1;
			b++;
		}
		else if(buffer[p] == 'o') {
			cases[a][b] = 0;
			b++;
		}
		else
			cases[a][b] = buffer[p];
		if(b == w) {
			a++;
			b = 0;
		}
		p++;
	}
	search_square(cases, buffer, w, h);
}

int new_nbr(int **cases, char* buffer, int a, int b)
{
	int c = 0;
	int d = 0;
	int e = 0;
	int m = 0;
	c = cases[a - 1][b];
	d = cases[a][b - 1];
	e = cases[a - 1][b - 1];
	m = c;

	if(m > d)
	m = d;
	else if(m > e)
		m = e;
		return(m);
}

int find_fsquare(int **cases, char *buffer, pos_b *position)
{
	int n = position->b;
	int i = position->a;
	int bigger = position->bigger;
	int t = 0;
	int s = ((position->w + 1) * (i - 1) + n);

	while(buffer[t] != '.' && buffer[t] != 'o') {
		t++;
	}
	s = s + (t - 1);
	buffer[s] = 'x';
	filling_x(buffer, bigger, position);
	free(cases);
}

int find_square(int **cases, char *buffer, pos_b *position)
{
	int a = 0;
	int b = 0;
	int bigger = 0;
	while(a < position->h) {
		if (bigger < cases[a][b]) {
			bigger = cases[a][b];
			position->bigger = bigger;
			position->a = a + 1;
			position->b = b + 1;
		}
		else if(b == position->w) {
			a++;
			b = 0;
		}
		b++;
	}
	find_fsquare(cases, buffer, position);
}

int search_square(int **cases, char *buffer, int w, int h)
{
	int a = 1;
	int b = 1;
	int m = 0;
	pos_b *position = malloc(sizeof (pos_b));
	position->w = w;
	position->h = h;
	while(a != h) {
		if(cases[a][b] == 0)
			b++;
		else if(cases[a][b] == 1) {
			m = new_nbr(cases, buffer, a, b);
			cases[a][b] = m + 1;
			b++;
		}
		if (b == w) {
			a++;
			b = 1;
		}
	}
	find_square(cases,buffer, position);
}
