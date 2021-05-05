/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** manage_ia.c
*/

#include "my.h"

char **turn_of_ia(char **map, int size, int blows)
{
    t_matchstick play;

    my_putstr("AI's turn...\n");
    do {
        do {
            play.line_to_rm = random()/1000000;
        }while (error_for_line_bot(play.line_to_rm, size) != 0);
        play.rm_matches = random()/1000000;
        play.matchs_to_rm = count_matches(play.line_to_rm, map);
    }while (error_for_matches_bot(play.rm_matches, blows, play.matchs_to_rm));
    my_putstr("AI removed ");
    my_put_nbr(play.rm_matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(play.line_to_rm);
    my_putchar('\n');
    map = remove_matches(play.rm_matches, play.line_to_rm, map);
    print_map(map);
    return map;
}

int error_for_line_bot(int line, int size)
{
    if (line < 0)
        return (84);
    if (line == 0 || line > size)
        return (84);
    return (0);
}

int error_for_matches_bot(int matches, int mmpt, int remaining_matches)
{
    if (matches < 0)
        return (84);
    if (matches == 0)
        return (84);
    if (matches > mmpt)
        return (84);
    if (matches > remaining_matches)
        return (84);
    return (0);
}

int outrange_random_bot(int size)
{
    int z = rand();

    while (z > 0 && z < size)
        z = rand();
    return (z);
}
