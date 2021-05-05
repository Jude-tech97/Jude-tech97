/*
** EPITECH PROJECT, 2020
** Repo_Myprintf
** File description:
** display_char.c
*/

#include "my.h"
#include <stdarg.h>

void display_char(va_list list)
{
    my_putchar((char) va_arg(list, int));
}