/*
** EPITECH PROJECT, 2020
** Task01
** File description:
** Day07
*/

#include "my.h"

int my_putstr(char const *str)
{
    int z;

    z = 0;
    while (str[z] != '\0') {
        my_putchar(str[z]);
        z = z + 1;
    }
}
