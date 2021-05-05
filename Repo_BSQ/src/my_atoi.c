/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_atoi.c
*/

#include "my.h"

int	my_atoi(char *str)
{
    int	a = 0;
    int	b = 0;

    while (str[a] != 0) {
        if (str[a] >= '0' && str[a] <= '9') {
            b = b * 10;
            b = b + str[a] - '0';
        }
        a = a + 1;
    }
    return (b);
}