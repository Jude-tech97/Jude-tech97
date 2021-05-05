/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** printArray.c
*/

#include "my.h"

void print_array(char **map)
{
    int count = 0;
    int nbr_ln_max = 0;
    int nbr_cols_max = 0;

    getmaxyx(stdscr, nbr_ln_max, nbr_cols_max);
    while (map[count]) {
        mvprintw((nbr_ln_max/2), (nbr_cols_max/2), map[count]);
        nbr_ln_max += 2;
        count++;
    }
    count = 0;
}