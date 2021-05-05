/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** parc.c
*/

#include "my.h"

void make_a_park(t_map map, t_size size, t_incr incr)
{
    while (map.array[size.x][size.y] != size.bigger) {
        if (size.y < size.cols)
            size.y += 1;
        else {
            size.y = 0;
            size.x += 1;
        }
    }
    incr.tmp1 = size.y - size.bigger;
    incr.tmp2 = size.x - size.bigger;
    while (size.y != incr.tmp1) {
        size.x = incr.tmp2 + size.bigger;
        while (size.x != incr.tmp2) {
            map.array[size.x][size.y] = -1;
            size.x -= 1;
        }
        size.y -= 1;
    }
    disp_map(size, map);
}