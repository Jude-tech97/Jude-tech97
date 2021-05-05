/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** print_map.c
*/

#include "my.h"

void print_map(char **map)
{
    int count;

    for (count = 0; map[count] != NULL; count++) {
        my_putstr(map[count]);
        my_putchar('\n');
    }
    my_putchar('\n');
}