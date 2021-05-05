/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** help.c
*/

#include "my.h"

int help(char **lineof_command)
{
    if (my_strcmp(lineof_command[1], "-h") == 0) {
        my_printf("USAGE\n");
        my_printf("\t./my_sokoban map\n");
        my_printf("DESCRIPTION\n");
        my_printf("\tmap file representing the warehouse map, ");
        my_printf("containing ‘#’ for walls, ‘P’ for the player, ");
        my_printf("‘X’ for boxes and ‘O’ for storage locations.\n");
        return 1;
    }
}