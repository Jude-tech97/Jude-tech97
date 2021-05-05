/*
** EPITECH PROJECT, 2020
** Repo_Myprintf
** File description:
** display_int.c
*/

#include "my.h"

void display_int(va_list list)
{
    my_put_nbr(va_arg(list, int));
}