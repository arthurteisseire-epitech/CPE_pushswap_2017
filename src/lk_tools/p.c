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
		if (lb->begin != lb->begin->next)
			write(1, "pa ", 3);
		else
			write(1, "pa\n", 3);
		archive_first_node(lb);
		archive_node_to_list(lb, la);
	}
}

void pb(control_t *la, control_t *lb)
{
	if (la->begin != NULL) {
		write(1, "pb ", 3);
		archive_first_node(la);
		archive_node_to_list(la, lb);
	}
}
