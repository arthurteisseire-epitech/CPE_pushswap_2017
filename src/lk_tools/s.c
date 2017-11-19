/*
** EPITECH PROJECT, 2017
** File Name : s.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "struct.h"

static void set_prev(control_t *la)
{
	la->begin->prev = la->tmp->prev;
	la->begin->prev->next = la->begin;
	la->begin->next->prev = la->begin;
	la->tmp->next->prev = la->tmp;
}

void sa(control_t *la)
{
	if (la->begin != NULL && la->begin != la->begin->next) {
		la->tmp = la->begin;
		la->begin = la->begin->next;
		la->tmp->next = la->begin->next;
		la->begin->next = la->tmp;
		set_prev(la);
		write(1, "sa ", 3);
	}
}

void sb(control_t *lb)
{
	if (lb->begin != NULL && lb->begin != lb->begin->next) {
		lb->tmp = lb->begin;
		lb->begin = lb->begin->next;
		lb->tmp->next = lb->begin->next;
		lb->begin->next = lb->tmp;
		set_prev(lb);
		write(1, "sb ", 3);
	}
}

void sc(control_t *la, control_t *lb)
{
	sa(la);
	sb(lb);
}
