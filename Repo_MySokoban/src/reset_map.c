/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** reset_map.c
*/

#include "my.h"

int reset_map(char **save, char **map)
{
    int count;
    int z;

    for (count = 0; save[count]; count++) {
        for (z = 0; save[count][z] != '\0'; z++) {
            map[count][z] = save[count][z];
        }
    }
    return 0;
}