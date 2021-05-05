/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** error.c
*/

#include "my.h"

int	error(char *buf, int i)
{
    while (buf[i] != 0) {
        if (buf[i] == '\n' && buf[i + 1] == '\n') {
            my_putstr("Invalid Map\n");
            exit(-1);
        }
        if (buf[i] != '.' && buf[i] != 'o' && buf[i] != '\n') {
            my_putstr("Invalid caracter on map\n");
            my_putstr("Map can contain only '.' or 'o'\n");
            exit(-1);
        }
        i += 1;
    }
    return (0);
}

int	if_error(char *buf)
{
    int	i = 0;

    while (buf[i] != '\n') {
        if (buf[i] < '0' || buf[i] > '9') {
            my_putstr("Map need to contains ");
            my_putstr("number on the first line\n");
            exit(-1);
        }
        i += 1;
    }
    error(buf, i);
    if_map_empty(buf, i);
}

int	if_map_empty(char *buf, int i)
{
    if (buf[i] == '\n' && buf[i + 1] == 0) {
        my_putstr("Invalid Map\n");
        exit(-1);
    }
}

int	nbr_read(const int fd, char *buffer, int size)
{
    int	nb_read = read(fd, buffer, size);

    if (nb_read == -1) {
        my_putstr("Read Failed\n");
        my_putstr("Usage : ./bsq [map] -> [map] need ");
        my_putstr("to be store in a file\n");
        exit(-1);
    }
    return (nb_read);
}