/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** move_player.c
*/

#include "my.h"

int get_position_player(char **map)
{
    int nbr_ln_max = 0;
    int nbr_cols_max = 0;

    getmaxyx(stdscr, nbr_ln_max, nbr_cols_max);
    int x = player_line(map);
    int y = player_col(map);
    int x_position = (nbr_ln_max/2) + x;
    int y_position = (nbr_cols_max/2) + y;
    move(x_position, y_position);
    return 0;
}

int	player_line(char **map)
{
    int	y = 0;
    int	x = 0;

    while (map[x]) {
        while (map[x][y] != '\0') {
            if (map[x][y] == 'P')
                return (x);
            y++;
        }
        x++;
        y = 0;
    }
}

int	player_col(char **map)
{
    int	y = 0;
    int	x = 0;

    while (map[x]) {
        while (map[x][y] != '\0') {
            if (map[x][y] == 'P')
                return (y);
            y++;
        }
        x++;
        y = 0;
    }
    return (1);
}

void move_player(char **map, char **save)
{
    keypad(stdscr, TRUE);
    int ch = getch();
    switch (ch) {
        case KEY_RIGHT :
            key_right(map);
            break;
        case KEY_DOWN :
            key_down(map);
            break;
        case KEY_UP :
            key_up(map);
            break;
        case KEY_LEFT :
            key_left(map);
            break;
        case 32 :
            reset_map(save, map);
            break;
    }
}