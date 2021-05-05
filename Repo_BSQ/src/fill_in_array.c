/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** fill_array.c
*/

#include "my.h"

int	fill_in_array(t_map map, t_size size, t_incr incr)
{
    incr.i = 0;

    while (map.buffer[incr.i - 1] != '\n')
        incr.i += 1;
    while (incr.j != size.lines) {
        incr.k = 0;
        while (incr.k != size.cols) {
            map.array[incr.j][incr.k] = check(map, size, incr);
            if (map.array[incr.j][incr.k] > size.bigger)
                size.bigger = map.array[incr.j][incr.k];
            incr.k += 1;
            incr.i += 1;
        }
        incr.i += 1;
        incr.j += 1;
    }
    size.x = 0;
    size.y = 0;
    make_a_park(map, size, incr);
    free(map.array);
}