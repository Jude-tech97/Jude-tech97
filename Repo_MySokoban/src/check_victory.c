/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** check_victory.c
*/

#include "my.h"

int check_victory(char **map)
{
    int count;
    int z;
    int nbr_de_slot = 0;

    for (count = 0; map[count]; count++){
        for (z = 0; map[count][z] != '\0'; z++) {
            if (map[count][z] == 'O') {
                    nbr_de_slot++;
                }
        }
        z = 0;
    }
    if (nbr_de_slot == 0) {
        print_array(map);
        return (0);
    }
    return (1);
}