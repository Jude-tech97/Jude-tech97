/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** main.c
*/

#include "my.h"

int main(int argc, char **argv)
{
    int size;
    int blows;
    char **map;

    if (argc != 3)
        return 84;
    size = my_getnbr(argv[1]);
    blows = my_getnbr(argv[2]);
    invalid_input(size, blows);
    map = generatorof_map(size);
    map = generatorof_matchstick(size, map);
    print_map(map);
    blows = play(map, size, blows);
    if (blows == 84)
        return 0;
    free_map(map, size);
    return blows;
}