/*
** EPITECH PROJECT, 2020
** Task01
** File description:
** Day07
*/

int my_strcmp(char const *s1, char const *s2)
{
    int compt = 0;

    while ((s1[compt] == s2[compt]) && (s1[compt] != '\0')
            && (s2[compt] != '\0')) {
        compt++;
    }
    return (s1[compt] - s2[compt]);
}
