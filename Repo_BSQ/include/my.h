/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** bsq.h
*/

#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
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

typedef struct s_map
{
    char *buffer;
    int	**array;
}       t_map;

typedef struct	s_incr
{
    int	i;
    int	j;
    int	k;
    int	tmp1;
    int	tmp2;
}       t_incr;

#ifndef LIBMY_H
#define LIBMY_H

void my_flags(char format, va_list list);
int my_printf(const char *format, ...);
void fill_in_buffer(t_map map, int fd, int size);
int	check(t_map map, t_size size, t_incr incr);
int fs_open_file(char const *filepath);
int	disp_map(t_size size, t_map map);
int	my_atoi(char *str);
int	error(char *buf, int i);
int	fill_in_array(t_map map, t_size size, t_incr incr);
int	find_square(t_size size, t_map map, t_incr incr);
int	malloc_array(t_map map, t_size size, t_incr incr);
int	nbr_cols(char *buffer);
int	nbr_lines(char *buffer);
void make_a_park(t_map map, t_size size, t_incr incr);
int	if_error(char *buf);
int	if_map_empty(char *buf, int i);
int	nbr_read(const int fd, char *buffer, int size);
int my_strlen(char const *str);
void display_char(va_list list);
void display_int(va_list list);
void display_str(va_list list);
void display_unsigned(va_list list);
void my_putchar(char c);
void my_put_nbr(int nb);
int my_putstr(char const *str);
#endif
