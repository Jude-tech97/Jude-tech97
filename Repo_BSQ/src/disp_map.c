/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** disp_map.c
*/

#include "my.h"

int	disp_map(t_size size, t_map map)
{
    size.y = 0;
    while (size.y != size.lines) {
        size.x = 0;
        while (size.x != size.cols) {
            if (map.array[size.y][size.x] == -1)
            my_putchar('x');
            else if (map.array[size.y][size.x] == 0)
            my_putchar('o');
            else
            my_putchar('.');
            size.x += 1;
        }
        my_putchar('\n');
        size.y += 1;
    }
}