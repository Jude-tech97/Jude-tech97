/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** nbr_cols.c
*/

int	nbr_cols(char *buffer)
{
    int	i = 0;
    int	nbr = 0;

    while (buffer[i] != '\n')
        i += 1;
    i += 1;
    while (buffer[i] != '\n') {
        nbr += 1;
        i += 1;
    }
    return (nbr);
}