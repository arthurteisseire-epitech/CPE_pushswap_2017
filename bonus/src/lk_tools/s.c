/*
** EPITECH PROJECT, 2017
** File Name : s.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "struct.h"

static void swap(control_t *list, char *to_print)
{
	int stock;

	if (list->begin->next->next != list->begin) {
		stock = list->begin->nb;
		list->begin->nb = list->begin->next->nb;
		list->begin->next->nb = stock;
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
