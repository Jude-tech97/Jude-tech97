/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** draw.c
*/

#include "my.h"

char **malloc_array(int size)
{
    int count;
    char **map;

    map = malloc(sizeof(char *) * (size + 3));
    for (count = 0; count < (size + 2); count++) {
        map[count] = malloc(sizeof(char) * (size * 2) + 3);
    }
    map[count] = NULL;
    return (map);
}

char **generatorof_map(int size)
{
    char **map;
    int count;

    map = malloc_array(size);
    map[0] = my_setchar(map[0], '*', (size * 2) + 1);
    for (count = 1; count < size + 1; count++) {
        map[count] = my_setchar(map[count], ' ', (size * 2) + 1);
        map[count][0] = '*';
        map[count][size * 2] = '*';
    }
    map[size + 1] = my_setchar(map[size + 1], '*', (size * 2) + 1);
    return map;
}

char **generatorof_matchstick(int size, char **map)
{
    int z = size;
    int constant = 1;
    int count;

    for (count = 0; constant <= size; count++) {
        z = (size - count);
        while (z < (size + count + 1)) {
            map[constant][z] = '|';
            z++;
        }
        constant++;
    }
    return (map);
}