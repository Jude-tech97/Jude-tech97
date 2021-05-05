/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** check_lose.c
*/

#include "my.h"

int	check_boxes(char **map, int x, int y)
{
    if ((map[x - 1][y] == '#' || map[x - 1][y] == 'X')
        && (map[x][y - 1] == '#' || map[x][y + 1] == '#'
        || map[x][y - 1] == 'X' || map[x][y + 1] == 'X'))
        return (1);
    if ((map[x + 1][y] == '#' || map[x + 1][y] == 'X')
        && (map[x][y - 1] == '#' || map[x][y + 1] == '#'
        || map[x][y - 1] == 'X' || map[x][y + 1] == 'X'))
        return (1);
    return (0);
}

int	count_x(char **map)
{
    int	count;
    int	z;
    int nb = 0;

    for (count = 0; map[count]; count++) {
        for (z = 0; map[count][z] != '\0'; z++) {
            if (map[count][z] == 'X')
                nb++;
        }
    }
    return (nb);
}

int	check_lose(char **map)
{
    int	count;
    int z;
    int	blocs = 0;

    for ( count = 0; map[count]; count++) {
        for (z = 0; map[count][z] != '\0'; z++) {
            if (map[count][z] == 'X' && check_boxes(map, count, z) == 1)
                blocs = blocs + 1;
        }
    }
    if (blocs == count_x(map))
        return (1);
    return (0);
}

