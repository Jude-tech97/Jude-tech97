/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** play.c
*/

#include "my.h"

int play(char **map, int size, int blows)
{
    while (1337) {
        map = turn_of_player(map, size, blows);
        if (map == NULL)
            return (84);
        if (to_lose(map) == 0) {
            my_putstr("You lost, too bad...\n");
            return (2);
        }
        map = turn_of_ia(map, size, blows);
        if (map == NULL)
            return (84);
        if (to_lose(map) == 0) {
            my_putstr("I lost... snif... but I'll get you next time!!\n");
            return (1);
            }
    }
}