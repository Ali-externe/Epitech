/*
** EPITECH PROJECT, 2018
** matchstick.c
** File description:
** matchstick
*/

#include "my.h"

void puttwolines(char *chemin)
{
	char **navy_map = malloc(sizeof(char *) * 10);

	navy_map[0] = my_strcpy(" |A B C D E F G H\0");
	navy_map[1] = my_strcpy("-+---------------\0");
	navy_map[2] = my_strcpy("1|. . . . . . . .\0");
	navy_map[3] = my_strcpy("2|. . . . . . . .\0");
	navy_map[4] = my_strcpy("3|. . . . . . . .\0");
	navy_map[5] = my_strcpy("4|. . . . . . . .\0");
	navy_map[6] = my_strcpy("5|. . . . . . . .\0");
	navy_map[7] = my_strcpy("6|. . . . . . . .\0");
	navy_map[8] = my_strcpy("7|. . . . . . . .\0");
	navy_map[9] = my_strcpy("8|. . . . . . . .\0");
	readf(navy_map, chemin);
}

void putfive(char **navy_map, char *stok)
{
	int x = stok[12];
	int y = stok[13];
	int c = stok[14];
	int u = stok[15];

	if (y == u) {
		navy_map[y + 1][(x * 2)] = '5';
		navy_map[u + 1][(c * 2)] = '5';
		navy_map[u + 1][(c * 2) - 6] = '5';
		navy_map[u + 1][(c * 2) - 4] = '5';
		navy_map[u + 1][(c * 2) - 2] = '5';
	}
	else if (x == c) {
		navy_map[y + 1][(x * 2)] = '5';
		navy_map[u + 1][(c * 2)] = '5';
		navy_map[u - 1][(c * 2)] = '5';
		navy_map[u - 2][(c * 2)] = '5';
		navy_map[u][(c * 2)] = '5';
	}
	putstrcharai(navy_map);
}

void connexion(int sig, siginfo_t *info, void *signal)
{
	if (sig == SIGUSR1) {
		my_putstr("enemy connected\n\n");
		my_putstr("my positions:\n");
	}
}

void connection_terminal(void)
{
	struct sigaction sig;

	sig.sa_flags = SA_SIGINFO;
	sig.sa_sigaction = &connexion;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
}

int main(int argc, char **argv)
{
	connection_terminal();
	char *chemin;
	int pid;
	int a = 0;

	if (argc < 2 || argc > 3) {
		return(84);
	}
	if (argc == 2) {
		chemin = argv[1];
		verif(chemin, a, pid);
	}
	else if (argc == 3)
		threearg(chemin, pid, argc, argv);
}
