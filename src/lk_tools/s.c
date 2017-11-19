/*
** EPITECH PROJECT, 2017
** File Name : s.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "struct.h"

static void set_prev(control_t *list)
{
	list->begin->prev = list->tmp->prev;
	list->begin->prev->next = list->begin;
	list->begin->next->prev = list->begin;
	list->tmp->next->prev = list->tmp;
}

static void swap(control_t *list, char *to_print)
{
	if (list->begin->next->next == list->begin)
		list->begin = list->begin->next;
	else {
		list->tmp = list->begin;
		list->begin = list->begin->next;
		list->tmp->next = list->begin->next;
		list->begin->next = list->tmp;
		set_prev(list);
		write(1, to_print, 3);
	}
}

void sa(control_t *la)
{
	if (la->begin != NULL && la->begin != la->begin->next)
		swap(la, "sa ");
}

void sb(control_t *lb)
{
	if (lb->begin != NULL && lb->begin != lb->begin->next)
		swap(lb, "sb ");
}

void sc(control_t *la, control_t *lb)
{
	sa(la);
	sb(lb);
}
