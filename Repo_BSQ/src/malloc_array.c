/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** malloc_array.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int	malloc_array(t_map map, t_size size, t_incr incr)
{
    incr.i = 0;
    map.array = malloc(sizeof(int *) * size.cols);

    if (map.array == NULL) {
        my_putstr("Malloc Fail\n");
        exit(-1);
    }
    while (incr.i < size.lines) {
        if ((map.array[incr.i++] = malloc(sizeof(int *) * size.cols)) == NULL) {
            my_putstr("Malloc Fail2\n");
            exit(-1);
        }
    }
    fill_in_array(map, size, incr);
}