/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#include <stdlib.h>
#ifndef _MY_
# define _MY_

void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);
int my_put_nbr(int nb);
void move(char *s, char **env, char **parse);
void move_2(char *path);
void env_com(char **env);
char **system_command(char **env);
char **char_path(char **env, int i);
char **path_completion(char **path, char **env, int i);
int exe_ls(char **path, char *s, char **parse, char **env);
char **ls_conv(char **path, char **parse);
char **pwd_conv(char **path);
char **complete_copy(char **env, char **copy, char *s, char *var);
char **set_var(char **env, char **parse);
char *var_complete(char *s);
char *home_sweet_home(char **env);
char *home_reached(char *home, char **env, int line);
void exe_pwd(char **path, char *s, char **parse);
int old_folder(char *s, char **env, char **parse);
char *old_pwd(char **env);
char *old_reached(char *old, char **env, int line);
char *option_ls(char *s);
int compare(char *str1, char *str2);
void exe_exe(char *s, char **parse, char **env);
char **commands(char *s, char **env, char **parse);
void minishell(char **env);
char **tab(char *s);
char **fill_tab(char **tab, char *s, int nb);
char **git_conv(char **path);
void exe_git(char **path, char *s, char **parse);
int nb_lines(char *s);
int next_commands(char *s, char **env, char **parse);
int next_next_commands(char *s, char **env, char **parse);
char **emacs_conv(char **path);
void exe_emacs(char **path, char *s, char **parse);
char **old_ls_conv(char **path);
char **my_parser(char *str);
int print_prompt(char *pwd);
char ***parse_command(char **d_str);
void clean_semicolons(char ***end);
int some_more_commands(char *s, char **env, char **parse);
char **realloc_2d(char **str, char *new, char *next);
char **new_env(char **env, int j);
char **unset(char **env, char *str);
int exe_next(char **path, char **newargv, char **parse, char **env);
char **realloc_2d_parse(char **str, char *new);
char *clean_str(char *str);
char *get_next_line(int fd);

#endif
