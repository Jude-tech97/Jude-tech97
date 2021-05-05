/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** loop.c
*/

#include "my.h"

void loop(void)
{
    char *line;

    do {
        line = read_line();
        free(line);
    }
    while (1);
}