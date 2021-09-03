/*
** EPITECH PROJECT, 2017
** my_strcp
** File description:
** 
*/

int my_strcp(char *stra, char *strb)
{
	int x = 0;

	while (stra[x] != '\0' && strb[x] != '\0') {
		if (stra[x] != strb[x]) {
			return (stra[x] - strb[x]);
		}
		x++;
	}
	return (stra[x] - strb[x]);
}
