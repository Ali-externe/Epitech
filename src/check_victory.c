/*
** EPITECH PROJECT, 2018
** n4s
** File description:
** check_victory
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "n4s.h"

int check_victory(line_save_t *ls)
{
	if (ls->values[35] != NULL) {
		if (my_strcp(ls->values[35], "Track Cleared") == 0) {
			exec_command("CAR_FORWARD:0\n", ls);
			exec_command("STOP_SIMULATION\n", ls);
			return (1);
		}
	}
	return (0);
}
