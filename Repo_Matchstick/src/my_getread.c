/*
** EPITECH PROJECT, 2020
** Repo_Matchstick
** File description:
** my_getread.c
*/

int my_getread(char *str)
{
    int count = 0;
    int result = 0;

    if (str[0] < '0' || str[0] > '9')
        return -1;
    for (count = 0; str[count] != '\n'; count++) {
        if (str[count] < '0' || str[count] > '9')
            return -1;
        result *= 10;
        result += str[count] - '0';
    }
    return (result);
}