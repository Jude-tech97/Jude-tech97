/*
** EPITECH PROJECT, 2020
** Repo_Myprintf
** File description:
** my_putnbr.c
*/

#include "my.h"

void my_put_nbr(int nb)
{
    int begining;
    int end;

    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-nb);
    }
    else {
        end = nb % 10;
        begining = nb / 10;
        if (begining != 0) {
            my_put_nbr(begining);
        }
        my_putchar(end + '0');
    }
}