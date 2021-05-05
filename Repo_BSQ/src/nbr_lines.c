/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** nbr_lines.c
*/

#include "my.h"

int	nbr_lines(char *buffer)
{
    int	i = 0;
    int	nbr = 0;
    char *str = malloc(sizeof(buffer));

    if (str == NULL)
        exit(-1);
    while (buffer[i] != '\n') {
        str[i] = buffer[i];
        i += 1;
    }
    while (buffer[i] != 0) {
        if (buffer[i] == '\n')
            nbr += 1;
        i += 1;
    }
    if (nbr - 1 != my_atoi(str))
        exit (-1);
    free(str);
    return (nbr - 1);
}