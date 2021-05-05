/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** my_getnbr.c
*/

#include "my.h"

int my_getnbr(char *str)
{
    int count = 0;
    int result = 0;

    if (str[0] && str[0] == '-')
        count++;
    for (count = 0; str[count] != '\0'; count++) {
        if (str[count] < '0' || str[count] > '9')
            return (0);
        result += str[count] - 48;
        result *= 10;
    }
    result /= 10;
    if (str[0] == '-')
        result *= -1;
    return (result);
}