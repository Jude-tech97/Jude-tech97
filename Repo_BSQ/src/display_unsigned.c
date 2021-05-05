/*
** EPITECH PROJECT, 2020
** Repo_Myprintf
** File description:
** display_unsigned.c
*/

#include "my.h"
#include <stdarg.h>

void display_unsigned(va_list list)
{
    my_put_nbr((unsigned int) va_arg(list, unsigned int));
}