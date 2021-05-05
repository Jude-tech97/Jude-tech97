/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** free_map.c
*/

#include "my.h"

void free_map(char **map, int size)
{
    int count;

    free(map[0]);
    for (count = 1; count < (size + 2); count++)
        free(map[count]);
    free(map);
}