/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** my_setchar.c
*/

#include "my.h"

char *my_setchar(char *str, char c, int size)
{
    int count;

    for (count = 0; count < size; count++)
        str[count] = c;
    str[count] = '\0';
    return (str);
}