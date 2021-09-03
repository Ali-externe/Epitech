/*
** EPITECH PROJECT, 2018
** navy
** File description:
** PSU 2018
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <stdarg.h>
#include "navy.h"
#include "my.h"

int connect_p1(char const *pos)
{
	int fd = open(pos, O_RDONLY);
	int PID = getpid();
	char *buffer = NULL;

	buffer = malloc(sizeof(char) * 33);
	buffer[32] = '\0';

	if (fd == -1)
		return (84);
	write(1, "my_pid: ", 8);
	my_put_nbr(PID);
	write(1, "\nwaiting for ennemy connection...\n", 34);
	pause();
	read(fd, buffer, 32);
	return (0);
}

int connect_p2(int PID1, char const *pos)
{
	int fd = open(pos, O_RDONLY);
	int PID2 = getpid();
	char *buffer = malloc(sizeof(char) * 33);

	buffer[32] = '\0';

	if (fd == -1)
		return (84);
	write(1, "my_pid: ", 8);
	my_put_nbr(PID2);
	kill(PID1, SIGUSR2);
	read(fd, buffer, 32);
	return (0);
}

int error_manager(int ac)
{
	if (ac < 2 || ac > 3)
		return (84);
	return (0);
}

int main(int ac, char **av)
{
	int PID;
	char *chemin;

	if (error_manager(ac) == 84)
		return (84);

	if (ac == 2) {
		connect_p1(av[1]);
	}
	if (ac == 3) {
		PID = my_getnbr(av[1]);
		connect_p2(PID, av[2]);
	}
	return (0);
}
