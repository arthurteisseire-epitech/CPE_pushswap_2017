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
	lk_list_t *curr;

	if (list->begin != NULL) {
		curr = list->begin;
		while (curr->next != list->begin) {
			printf("(%d) -> ", curr->nb);
			curr = curr->next;
		}
		printf("(%d)\n", curr->nb);
		printf("NEXT -> %d\n", curr->next->nb);
	} else
		printf("(NULL)\n");
}

void my_show_rev_list(control_t *list)
{
	lk_list_t *curr;

	if (list->begin != NULL) {
		curr = list->begin->prev;
		while (curr != list->begin) {
			printf("(%d) -> ", curr->nb);
			curr = curr->prev;
		}
		printf("(%d)\n", curr->nb);
		printf("NEXT -> %d\n", curr->prev->nb);
	} else
		printf("(NULL)\n");
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
	control_t *lb = malloc(sizeof(control_t));

	if (ac < 2)
		return (84);
	ac--;
	av++;
	la = array_to_lk_list(ac, av);
	lb->begin = NULL;

	printf("\nLIST A: --------------------\n");
	my_show_list(la);
	printf("FIN LIST A --------------------\n");
	printf("\nLIST B: --------------------\n");
	my_show_list(lb);
	printf("FIN LIST B --------------------\n");
	pb(la, lb);
	pb(la, lb);
	printf("\nLIST A: --------------------\n");
	my_show_list(la);
	printf("FIN LIST A --------------------\n");
	printf("\nLIST B: --------------------\n");
	my_show_list(lb);
	printf("FIN LIST B --------------------\n");
	printf("\n\n-------------- REV LIST ---------------\n");
	printf("\nLIST A: --------------------\n");
	my_show_rev_list(la);
	printf("FIN LIST A --------------------\n");
	printf("\nLIST B: --------------------\n");
	my_show_rev_list(lb);
	printf("FIN LIST B --------------------\n");
	free_lk_list(la);
	free_lk_list(lb);
}
