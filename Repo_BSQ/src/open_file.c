/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** open_file.c
*/

#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <fcntl.h>
#include "my.h"

int fs_open_file(char  const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd > 0) {
        my_printf("SUCCESS\n");
    }
    else
        my_printf("FAILURE\n");
    return (fd);
}