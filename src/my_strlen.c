/*
** EPITECH PROJECT, 2017
** Task03
** File description:
** Day04
*/

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i ++;
	return (i);
}
