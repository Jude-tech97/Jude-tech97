/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** buffer.c
*/

#include "my.h"

void fill_in_buffer(t_map map, int fd, int size)
{
    int	i = 0;
    int	j = 0;
    int	k = 1;

    while (k > 0 && i < size) {
        k = nbr_read(fd, map.buffer, size);
        if (k > 0)
            j += k;
        i += 1;
    }
    map.buffer[j] = 0;
}