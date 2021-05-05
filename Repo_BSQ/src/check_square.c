/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** check_square.c
*/

#include "my.h"

int	check(t_map map, t_size size, t_incr incr)
{
    if (map.buffer[incr.i] == 'o')
        return (0);
    else if (incr.k == 0 || incr.j == 0)
        return (1);
    else if (map.buffer[incr.i] == '.')
        return (find_square(size, map, incr));
}