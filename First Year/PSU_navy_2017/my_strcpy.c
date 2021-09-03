/*
** EPITECH PROJECT, 2018
** putstr
** File description:
** putstr.c
*/

#include "my.h"

char *my_strcpy(char *str)
{
	char *newstr;
	int a = my_strlen(str);
	int i = 0;

	newstr = malloc(sizeof(char) * a);
	while(i != (a + 1)) {
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}

void empty(void)
{
	char **navy_map2 = malloc(sizeof(char *) * 10);

	navy_map2[0] = my_strcpy(" |A B C D E F G H\0");
	navy_map2[1] = my_strcpy("-+---------------\0");
	navy_map2[2] = my_strcpy("1|. . . . . . . .\0");
	navy_map2[3] = my_strcpy("2|. . . . . . . .\0");
	navy_map2[4] = my_strcpy("3|. . . . . . . .\0");
	navy_map2[5] = my_strcpy("4|. . . . . . . .\0");
	navy_map2[6] = my_strcpy("5|. . . . . . . .\0");
	navy_map2[7] = my_strcpy("6|. . . . . . . .\0");
	navy_map2[8] = my_strcpy("7|. . . . . . . .\0");
	navy_map2[9] = my_strcpy("8|. . . . . . . .\0");
	putstrcharai(navy_map2);
	my_putstr("attack: ");
}

void getmypid(void)
{
	int pid = getpid();
	my_put_nbr(pid);
	my_putchar('\n');
}

void putstrcharai(char **map)
{
	int a = 0;

	while (a != 10){
		my_putstr(map[a]);
		my_putchar('\n');
		a++;
	}
}

int verif(char *chemin, int a, int pid)
{
	int fd = open(chemin, O_RDONLY);

	if(fd == -1)
		return (84);
	else if(fd != -1 && a == 1) {
		my_putstr("my_pid: ");
		getmypid();
		kill(pid, SIGUSR1);
		my_putstr("successfully connected\n\nmy positions:\n");
		puttwolines(chemin);
		my_putstr("\nenemy's positions:\n");
		empty();
	}
	else if (fd != -1 && a == 0) {
		my_putstr("my_pid: ");
		getmypid();
		my_putstr("waiting for enemy connection...\n\n");
		pause();
		puttwolines(chemin);
		my_putstr("\nenemy's positions:\n");
		empty();
	}
}
