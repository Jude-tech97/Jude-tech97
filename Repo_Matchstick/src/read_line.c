/*
** EPITECH PROJECT, 2020
** Test_MSH
** File description:
** jdsh_read_line.c
*/

#include "my.h"

char *read_line(void)
{
    char *line = NULL;
    ssize_t bufsize = 0;

    if (getline(&line, &bufsize, stdin) == -1) {
        exit(EXIT_FAILURE);
    }
    return line;
}