/*
** EPITECH PROJECT, 2017
** Task02
** File description:
** Day04
*/

#include <unistd.h>

int my_strlen(char const *str);

int my_puterror(char const *str)
{
	write(2, str, my_strlen(str));
	return (0);
}
