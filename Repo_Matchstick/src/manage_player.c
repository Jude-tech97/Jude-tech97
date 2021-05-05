/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** manage_player.c
*/

#include "my.h"

char **turn_of_player(char **map, int size, int blows)
{
    t_matchstick play;

    my_putstr("Your turn:\n");
    do {
        do {
            my_putstr("Line: ");
            if (input_of_player(&play.line_to_rm) == 84)
                return NULL;
        }while (error_for_line(play.line_to_rm, size) != 0);
        my_putstr("Matches: ");
        if (input_of_player(&play.rm_matches) == 84)
            return NULL;
        play.matchs_to_rm = count_matches(play.line_to_rm, map);
    } while (error_for_matches(play.rm_matches, blows, play.matchs_to_rm) != 0);
    my_putstr("Player removed ");
    my_put_nbr(play.rm_matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(play.line_to_rm);
    my_putchar('\n');
    map = remove_matches(play.rm_matches, play.line_to_rm, map);
    print_map(map);
    return map;
}

int input_of_player(int *result)
{
    char buffer;
    char *input = malloc(sizeof(char));
    int nbr;

    input[0] = '\0';
    for (buffer = '\0'; buffer != '\n'; buffer = buffer) {
        buffer = '\0';
        nbr = read(0, &buffer, 1);
        input = my_realloc_toread(input, buffer);
        if (nbr == 0)
            return (84);
    }
    *result = my_getread(input);
    free(input);
    return (0);
}

int error_for_line(int line, int size)
{
    if (line < 0) {
        my_putstr("Error: ");
        my_putstr("invalid output (positive number expected)\n");
        return (84);
    }
    if (line == 0 || line > size) {
        my_putstr("Error: ");
        my_putstr("this line is out of range\n");
        return (84);
    }
    return (0);
}

int error_for_matches(int matches, int blows, int remaining_matches)
{
    if (matches < 0) {
        my_putstr("Error: ");
        my_putstr("invalid output (positive number expected)\n");
        return (84);
    }
    if (matches == 0) {
        my_putstr("Error: ");
        my_putstr("you have to remove at least one match\n");
        return (84);
    }
    if (matches > blows) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(blows);
        my_putstr(" matches per turn\n");
        return (84);
    }
    if (matches > remaining_matches) {
        error_for_matches_bis();
        return (84);
    }
    return (0);
}

void error_for_matches_bis(void)
{
    my_putstr("Error: ");
    my_putstr("not enough matches on this line\n");
}