/*
** EPITECH PROJECT, 2017
** File Name : p.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "struct.h"

static void archive_first_node(control_t *list)
{
	list->begin->next->prev = list->begin->prev;
	list->begin->prev->next = list->begin->next;
	list->tmp = list->begin;
	if (list->begin != list->begin->next)
		list->begin = list->begin->next;
	else
		list->begin = NULL;
}

static void archive_node_to_list(control_t *l_src, control_t *l_dest)
{
	if (l_dest->begin == NULL) {
		l_src->tmp->next = l_src->tmp;
		l_src->tmp->prev = l_src->tmp;
		l_dest->begin = l_src->tmp;
	} else {
		l_src->tmp->next = l_dest->begin;
		l_src->tmp->prev = l_dest->begin->prev;
		l_dest->begin->prev->next = l_src->tmp;
		l_dest->begin->prev = l_src->tmp;
		l_dest->begin = l_src->tmp;
	}
}

void pa(control_t *lb, control_t *la)
{
	if (lb->begin != NULL) {
		archive_first_node(lb);
		archive_node_to_list(lb, la);
		write(1, "pa ", 3);
	}
}

void pb(control_t *la, control_t *lb)
{
	int is_last = 0;

	if (la->begin != NULL) {
		if (la->begin == la->begin->next)
			is_last = 1;
		archive_first_node(la);
		archive_node_to_list(la, lb);
		if (!is_last)
			write(1, "pb ", 3);
		else
			write(1, "pb\n", 3);
	}
}
