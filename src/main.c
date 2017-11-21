/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include <stdio.h>
#include "my.h"
#include "lk_list.h"

//DELETE TO END
void my_show_list(control_t *list)
{
	lk_list_t *curr;

	if (list->begin != NULL) {
		curr = list->begin;
		while (curr->next != list->begin) {
			printf("\n(%d) -> \n", curr->nb);
			curr = curr->next;
		}
		printf("(%d)\n", curr->nb);
		printf("NEXT -> %d\n", curr->next->nb);
	} else
		printf("\t\t(NULL)\n");
}

void my_show_rev_list(control_t *list)
{
	lk_list_t *curr;

	if (list->begin != NULL) {
		curr = list->begin->prev;
		while (curr != list->begin) {
			printf("\n(%d) -> \n", curr->nb);
			curr = curr->prev;
		}
		printf("(%d)\n", curr->nb);
		printf("NEXT -> %d\n", curr->prev->nb);
	} else
		printf("\t\t(NULL)\n");
}
//END

int main(int ac, char **av)
{
	control_t *la;
	control_t *lb = malloc(sizeof(control_t));

	if (ac < 2)
		return (84);
	ac--;
	av++;
	la = array_to_lk_list(ac, av);
	lb->begin = NULL;

	//my_show_list(la);
	if (is_sorted(la)) {
		write(1, "\n", 1);
		return (0);
	}
	sort(la, lb, ac);
	//my_show_list(lb);
	//printf("\n");
	free_lk_list(la);
	free_lk_list(lb);
	return (0);
}
