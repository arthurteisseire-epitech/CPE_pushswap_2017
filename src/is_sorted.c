/*
** EPITECH PROJECT, 2017
** File Name : is_sorted.c
** File description:
** By Arthur Teisseire
*/

#include "lk_list.h"

int is_sorted(control_t *list)
{
	lk_list_t *end = list->begin->prev;
	lk_list_t *curr = list->begin;

	while (curr != end) {
		if (curr->nb > curr->next->nb)
			return (0);
		curr = curr->next;
	}
	return (1);
}
