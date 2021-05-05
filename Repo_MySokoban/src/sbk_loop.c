/*
** EPITECH PROJECT, 2020
** B-PSU-200-LYN-2-1-bsmysokoban-judicael.durvel
** File description:
** popup.c
*/

#include "my.h"

int sbk_loop(char **map, char **save)
{
    initscr();
    noecho();
    while (1) {
        clear();
        print_array(map);
        curs_set(0);
        get_position_player(map);
        move_player(map, save);
        int win = check_victory(map);
        int lose = check_lose(map);
        if (lose == 1) {
            do_lose(map);
            return (1);
        }
        if (win == 0) {
            do_win(map);
            return (0);
        }
        refresh();
    }
}