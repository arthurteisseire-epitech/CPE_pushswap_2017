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
	la->begin = la->begin->next;
	write(1, "ra ", 3);
}

void rb(control_t *lb)
{
	lb->begin = lb->begin->next;
	write(1, "rb ", 3);
}

void rr(control_t *la, control_t *lb)
{
	la->begin = la->begin->next;
	lb->begin = lb->begin->next;
	write(1, "rr ", 3);
}
