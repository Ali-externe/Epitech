/*
** EPITECH PROJECT, 2017
** my_pushswap.c
** File description:
** pushswap
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <criterion/criterion.h>

void my_putchar(char c);
int my_putnbr(int i);

void swap_elem(int *array, int index1, int index2)
{
	int i = 0;

	i = array[index1];
	array[index1] = array[index2];
	array[index2] = i;
}

void type(int* array, int size)
{
	for (int i = 0; i < size ; i++) {
		my_putnbr(array[i]);
		if ( i != size)
			my_putchar('-');
	}
	my_putchar('\n');
}

void bubble_sort_array(int *array, int size)
{
	int i = 0;
	int i1 = 0;
	int i2;

	if(size < 2)
		write(2, "Not enough numbers\n", 1);
	
	while (i1 != 1) {
		i1 = 1;
		for (i2 = 0 ; i2 < size - 1 ; i2++) {
			if (array[i2 + 1] < array[i2]) {
				i = array[i2 + 1];
				array[i2 + 1] = array[i2];
				array[i2] = i;
				i1 = 0;
			}
			my_putnbr(array[i2]);
		}
	}
}
