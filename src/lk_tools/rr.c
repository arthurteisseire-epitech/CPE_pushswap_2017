/*
** EPITECH PROJECT, 2017
** File Name : rr.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "struct.h"

void rra(control_t *la)
{
	if (la->begin != NULL && la->begin != la->begin->next)
		la->begin = la->begin->prev;
}

void rrb(control_t *lb)
{
	if (lb->begin != NULL && lb->begin != lb->begin->next)
		lb->begin = lb->begin->prev;
}

void rrr(control_t *la, control_t *lb)
{
	rra(la);
	rrb(lb);
}
