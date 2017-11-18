/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include <stdio.h>
#include "lk_list.h"

void my_show_list(control_t *control)
{
	lk_list_t *curr = control->begin;

	while (curr->next != control->begin) {
		printf("%d\n", curr->nb);
		curr = curr->next;
	}
}

void free_lk_list(control_t *control)
{
	lk_list_t *curr = control->begin;

	while (curr->next != control->begin) {
		control->tmp = curr->next;
		free(curr);
		curr = control->tmp;
	}
	free(control->tmp);
	free(control);
}

int main(int ac, char **av)
{
	control_t *control;

	if (ac < 2)
		return (84);
	control = array_to_lk_list(ac, av);
	my_show_list(control);
	free_lk_list(control);
}
