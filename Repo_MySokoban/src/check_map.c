/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** check_map.c
*/

#include "my.h"

int check_map(char **map)
{
    int count;
    int z;

    for (count = 0; map[count]; count++){
        for (z = 0; map[count][z] != '\0'; z++) {
            if (map[count][z] != 'P' && map[count][z] != 'X'
                && map[count][z] != ' ' && map[count][z] != 'O'
                && map[count][z] != '#' && map[count][z] != '\n') {
                    my_printf("ERROR : ");
                    my_printf("Invalid map !\n");
                    exit(EXIT_FAILURE);
                }
        }
        z = 0;
    }
    return (0);
}