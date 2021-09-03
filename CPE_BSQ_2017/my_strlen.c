/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** strlen
*/

int my_strlen(char const *str)
{
	int p;
	p = 0;
	while(str[p] != '\n') {
		p++;
	}
	return(p);
}

int my_strlen2(char const *str) {
	int p;
	int a = 0;
	p = my_strlen(str);
	p = p + 1;
	while(str[p] != '\n') {
		p++;
		a++;
	}
	return(a);
}
