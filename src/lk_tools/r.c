/*
** EPITECH PROJECT, 2017
** File Name : r.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "struct.h"

void ra(control_t *la)
{
	if (la->begin != NULL) {
		la->begin = la->begin->next;
		write(1, "ra ", 3);
	}
}

void rb(control_t *lb)
{
	if (lb->begin != NULL) {
		lb->begin = lb->begin->next;
		write(1, "rb ", 3);
	}
}

void rr(control_t *la, control_t *lb)
{
	ra(la);
	rb(lb);
}
