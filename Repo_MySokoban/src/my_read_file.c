/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** my_read_file.c
*/

#include "my.h"

int	nbr_read(const int fd, char *buffer, int size)
{
    int	nb_read = read(fd, buffer, size);

    if (nb_read == -1) {
        my_putstr("Read Failed\n");
        my_putstr("Usage : ./my_sokoban [map] -> [map] need ");
        my_putstr("to exist\n");
        return (84);
    }
    return (nb_read);
}