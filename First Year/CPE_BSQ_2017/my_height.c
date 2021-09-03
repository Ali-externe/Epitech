/*
** EPITECH PROJECT, 2017
** height.c
** File description:
** height
*/

int my_height(char const *str)
{
	int p = 0;
	int a = 0;

	while(str[p] != '\0') {
		p++;
		if(str[p] == '\n') {
			a++;
		}
	}
	return(a);
}
