/*
** EPITECH PROJECT, 2018
** n4s
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "n4s.h"

void exec_command(char *command, line_save_t *ls)
{
	my_putstr(command);
	getline(&ls->line, &ls->len, stdin);
}

int check_way(float middle, float norm, line_save_t *ls)
{
	if (middle > 900) {
		exec_command("WHEELS_DIR:0.0\n", ls);
		return (0);
	}
	else if (norm > 55) {
		exec_command("WHEELS_DIR:0.23\n", ls);
		return (1);
	}
	else {
		exec_command("WHEELS_DIR:-0.23\n", ls);
		return (1);
	}
	return (0);
}

int dead_end(float first, float middle, float last, line_save_t *ls)
{
	if (first < 70) {
		exec_command("WHEELS_DIR:0.3\n", ls);
		exec_command("CAR_BACKWARDS:1.0\n", ls);
		exec_command("CYCLE_WAIT:4.5\n", ls);
	}
	else if (middle < 65) {
		exec_command("WHEELS_DIR:0.0\n", ls);
		exec_command("CAR_BACKWARDS:1.0\n", ls);
		exec_command("CYCLE_WAIT:4.5\n", ls);
	}
	else if (last < 70) {
		exec_command("WHEELS_DIR:-0.3\n", ls);
		exec_command("CAR_BACKWARDS:1.0\n", ls);
		exec_command("CYCLE_WAIT:4.5\n", ls);
	}
	return (0);
}

int check_sides(line_save_t *ls)
{
	float middle = 0.0;
	float norm = 0.0;
	float first = 0.0;
	float last = 0.0;

	if (ls->values[3] != NULL && ls->values[34] != NULL && ls->values[17] != NULL) {
		first = atof(ls->values[3]);
		middle = atof(ls->values[17]);
		last = atof(ls->values[34]);
		norm = atof(ls->values[3]) - atof(ls->values[34]);
	}
	dead_end(first, middle, last, ls);
	check_way(middle, norm, ls);
	return (0);
}

int main(void)
{
	line_save_t ls;

	ls.line = NULL;
	ls.len = 0;
	ls.values = NULL;
	exec_command("START_SIMULATION\n", &ls);
	while (1) {
		exec_command("GET_INFO_LIDAR\n", &ls);
		ls.values = pars(ls.line);
		if (check_victory(&ls) == 1)
			break;
		if (check_sides(&ls) == 0)
			exec_command("CAR_FORWARD:0.9\n", &ls);
		else if (check_sides(&ls) == 1)
			exec_command("CAR_FORWARD:0.2\n", &ls);
	}
	return (0);
}
