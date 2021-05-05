/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** find_square.c
*/

#include "my.h"

int	find_square(t_size size, t_map map, t_incr incr)
{
    int	a = map.array[incr.j - 1][incr.k];
    int	b = map.array[incr.j][incr.k - 1];
    int	c = map.array[incr.j - 1][incr.k - 1];

    size.max = 0;
    if (a < b)
        b = a;
    if (b < c)
        c = b;
    return (c + 1);
}