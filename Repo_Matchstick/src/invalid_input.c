/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** invalid_input.c
*/

#include "my.h"

int invalid_input(int size, int blows)
{
    if (size == 0)
        return 84;
    if (size < 1 || size > 99)
        return 84;
    if (blows == 0 || blows < 1)
        return 84;
}