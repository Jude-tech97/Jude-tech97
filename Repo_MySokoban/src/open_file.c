/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** open_file.c
*/

#include "my.h"

int fs_open_file(char  const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd <= 0) {
        my_printf("ERROR : ");
        my_printf("You must write a name file !");
        exit(EXIT_FAILURE);
    }
    return (fd);
}