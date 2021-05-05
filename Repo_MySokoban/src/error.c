/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** error.c
*/

#include "my.h"

int error(char **argv)
{
    if (!argv[1]) {
        my_printf("ERROR : ");
        my_printf("You must have to put the filepath's map!\n");
        my_printf("Usage : ./my_sokoban [map]\n");
        exit (EXIT_FAILURE);
    }
}