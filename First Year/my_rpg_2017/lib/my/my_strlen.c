/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** Shows the lenght of the string
*/

int my_strlen(char const *str)
{
	int b = 0;

	while (str[b] != '\0'){
		b++;
	}
	return (b);
}
