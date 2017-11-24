/*
** EPITECH PROJECT, 2017
** File Name : check_flags.c
** File description:
** By Arthur Teisseire
*/

int check_flags(int ac char **av)
{
	if (av[0][0] == '-' && av[0][1] == 'p')
		return (1);
	return (0);
}
