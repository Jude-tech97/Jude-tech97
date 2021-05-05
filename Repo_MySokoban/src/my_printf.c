/*
** EPITECH PROJECT, 2020
** Repo_Myprintf
** File description:
** my_printf.c
*/

#include "my.h"

void my_flags(char format, va_list list)
{
    if (format == 'd' || format == 'i')
        display_int(list);
    if (format == 's')
        display_str(list);
    if (format == 'c')
        display_char(list);
    if (format == 'u')
        display_unsigned(list);
}

int my_printf(const char *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int count = 0; format[count] != '\0'; count++) {
        if (format[count] == '%') {
            my_flags(format[++count], list);
        }
        else {
            my_putchar(format[count]);
        }
    }
    va_end(list);
}