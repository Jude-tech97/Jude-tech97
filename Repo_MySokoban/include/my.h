/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
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

typedef struct s_size
{
    int	lines;
    int	cols;
    int	max;
    int	x;
    int	y;
    int	bigger;
}       t_size;

void display_char(va_list list);
int my_strcmp(char const *s1, char const *s2);
void display_int(va_list list);
void display_str(va_list list);
int error(char **argv);
void display_unsigned(va_list list);
char **split_str(char *str);
char **malloc_array(char *str, char c);
void my_flags(char format, va_list list);
int my_printf(const char *format, ...);
void my_put_nbr(int nb);
void my_putchar(char c);
int	nbr_read(const int fd, char *buffer, int size);
int my_putstr(char const *str);
int my_strlen(char const *str);
int sbk_loop(char **map, char **save);
void print_array(char **map);
int get_position_player(char **map);
void move_player(char **map, char **save);
int check_victory(char **map);
int reset_map(char **save, char **map);
void do_win(char **map);
void do_lose(char **map);
int	check_lose(char **map);
void key_right(char **map);
void key_down(char **map);
void key_up(char **map);
void key_left(char **map);
int check_map(char **map);
int	player_line(char **map);
int	player_col(char **map);
char *my_str_splited(char **map);
int fs_open_file(char  const *filepath);
int help(char **lineof_command);
#endif