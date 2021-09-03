/*
** EPITECH PROJECT, 2017
** info_file.c
** File description:
** infos_file
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <pwd.h>
#include <time.h>
#include <dirent.h>

void my_putchar(char c);
void my_put_nbr(int nb);
void my_putstr(char const *str);

char trwx(char *doc)
{
	struct stat a;
	char trwx;
	stat(doc, &a);

	if (S_ISREG (a.st_mode))
		trwx = '-';
	if (S_ISDIR (a.st_mode))
		trwx = 'd';
	if (S_ISCHR (a.st_mode))
		trwx = 'c';
	if (S_ISLNK (a.st_mode))
		trwx = 'l';
	return(trwx);
}

char* rwx(char* doc)
{
	struct stat a;
	char *place = malloc(sizeof(char) * 11 + 1);

	if (stat(doc, &a) == 0) {
		place[0] = trwx(doc);
 		place[1] = (a.st_mode & S_IRUSR) ? 'r' : '-';
		place[2] = (a.st_mode & S_IWUSR) ? 'w' : '-';
		place[3] = (a.st_mode & S_IXUSR) ? 'x' : '-';
		place[4] = (a.st_mode & S_IRGRP) ? 'r' : '-';
		place[5] = (a.st_mode & S_IWGRP) ? 'w' : '-';
		place[6] = (a.st_mode & S_IXGRP) ? 'x' : '-';
		place[7] = (a.st_mode & S_IROTH) ? 'r' : '-';
		place[8] = (a.st_mode & S_IWOTH) ? 'w' : '-';
		place[9] = (a.st_mode & S_IXOTH) ? 'x' : '-';
		place[10] = '.';
		place[11] = '\0';
		return (place);
	}
}

int flag_l(int ac, char** av)
{
	DIR *folder;
	struct dirent *fol;
	struct stat i;
	struct passwd *k;
	char *clock;

	folder = opendir(".");
	stat(".", &i);
	while ((fol = readdir(folder)) != NULL) {
		if (fol->d_name[0] != '.') {
			my_putstr(rwx(fol->d_name));
			stat(fol->d_name, &i);
			my_putchar(' ');
			my_put_nbr(i.st_nlink);
			my_putchar(' ');
			k = getpwuid(i.st_uid);
			my_putstr(k->pw_name);
			my_putchar(' ');
			my_putstr(k->pw_name);
			my_putchar(' ');
			my_put_nbr(i.st_size);
			my_putchar(' ');
			clock = ctime(&i.st_ctime);
			for (int g = 4; g != 16; g++)
				my_putchar(clock[g]);
			my_putchar(' ');
			my_putstr(fol->d_name);
			my_putchar('\n');
		}
	}
	closedir(folder);
	return (0);
}
