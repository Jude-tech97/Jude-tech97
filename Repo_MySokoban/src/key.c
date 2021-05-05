/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** key.c
*/

#include "my.h"

void key_right(char **map)
{
    char space = ' ';
    char player = 'P';
    char block = 'X';
    int x = player_line(map);
    int y = player_col(map);

    if (map[x][y + 1] != '#' && (map[x][y + 1] == ' '
        || map[x][y + 1] == 'O')) {
        map[x][y] = space;
        y++;
        map[x][y] = player;
    }
    else if (map[x][y + 2] != 'X' && map[x][y + 2] != '#'
            && map[x][y + 1] != '#' && map[x][y + 1] != 'O') {
        map[x][y] = space;
        map[x][y + 2] = block;
        y++;
        map[x][y] = player;
    }
}

void key_down(char **map)
{
    char space = ' ';
    char player = 'P';
    char block = 'X';
    int x = player_line(map);
    int y = player_col(map);

    if (map[x + 1][y] != '#' && (map[x + 1][y] == ' '
        || map[x + 1][y] == 'O')) {
        map[x][y] = space;
        x++;
        map[x][y] = player;
    }
    else if (map[x + 1][y] != '#' && map[x + 2][y] != 'X'
            && map[x + 2][y] != '#' && map[x + 1][y] != 'O') {
        map[x][y] = space;
        map[x + 2][y] = block;
        x++;
        map[x][y] = player;
    }
}

void key_up(char **map)
{
    char space = ' ';
    char player = 'P';
    char block = 'X';
    int x = player_line(map);
    int y = player_col(map);

    if (map[x - 1][y] != '#' && (map[x - 1][y] == ' '
        || map[x - 1][y] == 'O')) {
        map[x][y] = space;
        x--;
        map[x][y] = player;
    }
    else if (map[x - 1][y] != '#' && map[x - 2][y] != 'X'
            && map[x - 2][y] != '#' && map[x - 1][y] != 'O') {
                map[x][y] = space;
                map[x - 2][y] = block;
                x--;
                map[x][y] = player;
    }
}

void key_left(char **map)
{
    char space = ' ';
    char player = 'P';
    char block = 'X';
    int x = player_line(map);
    int y = player_col(map);

    if (map[x][y - 1] != '#' && (map[x][y - 1] == ' '
        || map[x][y - 1] == 'O')) {
        map[x][y] = space;
        y--;
        map[x][y] = player;
    }
    else if (map[x][y - 1] != '#' && map[x][y - 2] != 'X'
            && map[x][y - 2] != '#' && map[x][y - 1] != 'O') {
                map[x][y] = space;
                map[x][y - 2] = block;
                y--;
                map[x][y] = player;
    }
}