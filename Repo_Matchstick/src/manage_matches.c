/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** manage_matches.c
*/

#include "my.h"

int count_matches(int line, char **map)
{
    int count = 0;
    int z;

    for (z = 0; map[line][z] != '\0'; z++)
        if (map[line][z] == '|')
            count++;
    return (count);
}

char **remove_matches(int matches, int line, char **map)
{
    int count;

    for (count = my_strlen(map[line]); count != 0; count--) {
        if (map[line][count] == '|' && matches != 0) {
            map[line][count] = ' ';
            matches--;
        }
        if (matches == 0)
            return (map);
    }
    return (NULL);
}

int to_lose(char **map)
{
    int j = 1;

    for (j = 1; map[j] != NULL; j++) {
        if (count_matches(j, map) != 0)
            return (84);
    }
    return (0);
}