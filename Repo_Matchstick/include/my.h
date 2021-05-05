/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** my.h
*/

#ifndef LIBMY_H
#define LIBMY_H

#include <ncurses.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>

typedef struct matchstick
{
    int rm_matches;
    int line_to_rm;
    int matchs_to_rm;
} t_matchstick;

void loop(void);
char *read_line(void);
int my_getnbr(char *str);
int invalid_input(int size, int blows);
char *my_setchar(char *str, char c, int size);
char **generatorof_map(int size);
char **generatorof_matchstick(int size, char **map);
void print_map(char **map);
int my_putstr(char const *str);
char **turn_of_player(char **map, int size, int blows);
char **turn_of_ia(char **map, int size, int blows);
int to_lose(char **map);
void my_putchar(char c);
char *my_realloc_toread(char *str, char c);
int my_getread(char *str);
char *my_strcat(char *dest, char const *src);
int my_strlen(char const *str);
int play(char **map, int size, int blows);
int error_for_line_bot(int line, int size);
int my_put_nbr(int nb);
int rec_nbr(int nb);
int input_of_player(int *result);
int error_for_line(int line, int size);
int error_for_matches(int matches, int blows, int remaining_matches);
void error_for_matches_bis(void);
void *my_memcpy(void *dest, const void *src, size_t size);
char *my_strcat_read(char *output, char input);
int error_for_matches_bot(int matches, int mmpt, int remaining_matches);
void free_map(char **map, int size);
int count_matches(int line, char **map);
char **remove_matches(int matches, int line, char **map);
#endif