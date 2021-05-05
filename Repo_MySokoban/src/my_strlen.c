/*
** EPITECH PROJECT, 2020
** Task01
** File description:
** Day07
*/

int my_strlen(char const *str)
{
    int z;

    z = 0;
    while (str[z] != '\0') {
        z = z +1;
    }
    return (z);
}
