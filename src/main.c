/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include <stdio.h>
#include "lk_list.h"



//DELETE TO END
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
//END

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
	control_t *la;

	if (ac < 2)
		return (84);
	ac--;
	av++;
	la = array_to_lk_list(ac, av);
	my_show_list(la);
	ra(la);
	my_show_list(la);
	printf("\n\n-------------- REV LIST ---------------\n");
	my_show_rev_list(la);
	free_lk_list(la);
}
