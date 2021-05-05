/*
** EPITECH PROJECT, 2020
** Repo_Myprintf
** File description:
** display_str.c
*/

#include "my.h"

void display_str(va_list list)
{
    my_putstr((char *) va_arg(list, char *));
}