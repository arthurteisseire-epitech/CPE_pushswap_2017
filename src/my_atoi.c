/*
** EPITECH PROJECT, 2017
** File Name : my_atoi.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

int my_atoi(char *str)
{
	int nb = 0;
	int power = 1;
	int i = my_strlen(str) - 1;
	int isneg = str[0] == '-' ? 1 : 0;

	while (str[i] != '\0') {
		nb += (str[i] - '0') * power;
		power *= 10;
		i--;
	}
	if (isneg)
		nb = -nb;
	return (nb);
}
