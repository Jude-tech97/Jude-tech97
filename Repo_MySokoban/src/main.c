/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** main.c
*/

#include "my.h"

void main(int argc, char **argv)
{
    struct stat sb;
    int count;

    error(argv);
    if  (help(argv) == 1)
        exit(0);
    int fd = fs_open_file(argv[1]);
    stat(argv[1], &sb);
    int size = sb.st_size;
    char *buffer = malloc(sizeof(char) * size + 1);
    buffer[size] = '\0';
    nbr_read(fd, buffer, size);
    char **map = split_str(buffer);
    check_map(map);
    char **save = split_str(buffer);
    sbk_loop(map, save);
}