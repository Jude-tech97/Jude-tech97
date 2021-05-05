/*
** EPITECH PROJECT, 2020
** Repo_MySokoban
** File description:
** split_str.c
*/

#include "my.h"

char **malloc_array(char *str, char c)
{
    int count;
    int count_wrds = 1;
    int count_twoo = 0;
    int len = 0;
    char **array;

    for (count = 0; str[count] != '\0'; count++) {
        if (str[count] == c)
            count_wrds++;
    }
    array = malloc(sizeof(char *) * count_wrds + 1);
    for (count = 0; count != count_wrds; count++) {
        for (len; str[len] != c && str[len] != '\0'; len++) {
            count_twoo++;
        }
        len++;
        array[count] = malloc(sizeof(char) * count_twoo + 1);
        count_twoo = 0;
    }
    return (array);
}

char **split_str(char *str)
{
    char c = '\n';
    char **array = malloc_array(str, c);
    int count;
    int z = 0;
    int i;

    for (count = 0; array[count]; count++)
    {
        for (i = 0; str[z] != c && str[z] != '\0'; z++, i++)
        {
            array[count][i] = str[z];
        }
        array[count][i] = '\0';
        if (str[z] != '\0')
            z++;
    }
    array[count] = NULL;
    return (array);
}

char *my_str_splited(char **map)
{
    int count;
    char *map_of = malloc(sizeof(char) * 4000);

    for (count = 0; map[count]; count++) {
        map_of = map[count];
    }
    return (map_of);
}