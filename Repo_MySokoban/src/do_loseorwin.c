/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** do_lose.c
*/

#include "my.h"

void do_lose(char **map)
{
    print_array(map);
    refresh();
    endwin();
    my_printf("YOU LOSE !\n");
}

void do_win(char **map)
{
    print_array(map);
    refresh();
    endwin();
    my_printf("PLAYER WIN !\n");
}