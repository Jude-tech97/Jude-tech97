/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** main.c
*/

#include "my.h"

int	main(int ac, char **av)
{
    struct stat	*buf = malloc(sizeof(*buf));
    t_size size;
    t_map map;
    int	fd = fs_open_file(av[1]);
    t_incr incr;

    incr.i = 0;
    incr.j = 0;
    size.bigger = 0;
    if (ac != 2
        || (buf == NULL)
        || (stat(av[1], buf) == -1)
        || ((map.buffer = malloc(sizeof(char *)*buf->st_size)) == NULL)
        || (fd == -1))
        return (-1);
    fill_in_buffer(map, fd, buf->st_size);
    if_error(map.buffer);
    size.lines = nbr_lines(map.buffer);
    size.cols = nbr_cols(map.buffer);
    malloc_array(map, size, incr);
    free(map.buffer);
    free(buf);
}