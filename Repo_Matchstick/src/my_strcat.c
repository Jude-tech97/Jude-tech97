/*
** EPITECH PROJECT, 2020
** Task01
** File description:
** Day07
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i;
    int result = my_strlen(dest);

    for (i = 0; src[i] != '\0'; i++) {
        dest[result + i] = src[i];
    }
    dest[result + i] = '\0';
    return (dest);
}

char *my_strcat_read(char *output, char input)
{
    int len = my_strlen(output);

    output[len] = input;
    output[len + 1] = '\0';
    return (output);
}