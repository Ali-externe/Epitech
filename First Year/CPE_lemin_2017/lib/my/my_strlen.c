/*
** EPITECH PROJECT, 2018
**
** File description:
** 
*/

int my_strlen(char *str)
{
	int i = 0;

	while (str[i]) {
		i = i + 1;
	}
	return (i);
}
