/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include <stdio.h>
#include "lk_list.h"

void my_show_list(control_t *list)
{
	lk_list_t *curr = list->begin;

	while (curr->next != list->begin) {
		printf("(%d) -> ", curr->nb);
		curr = curr->next;
	}
	printf("(%d)\n", curr->nb);
}

void my_show_rev_list(control_t *list)
{
	lk_list_t *curr = list->begin->prev;

	while (curr != list->begin) {
		printf("(%d) -> ", curr->nb);
		curr = curr->prev;
	}
	printf("(%d)\n", curr->nb);
}

void free_lk_list(control_t *list)
{
	lk_list_t *curr = list->begin;

	while (curr->next != list->begin) {
		list->tmp = curr->next;
		free(curr);
		curr = list->tmp;
	}
	free(list->tmp);
	free(list);
}

int main(int ac, char **av)
{
	control_t *list;

	if (ac < 2)
		return (84);
	list = array_to_lk_list(ac, av);
	my_show_list(list);
	my_show_rev_list(list);
	free_lk_list(list);
}
