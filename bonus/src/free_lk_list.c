/*
** EPITECH PROJECT, 2017
** File Name : free_lk_list.c
** File description:
** By Arthur Teisseire
*/

#include "struct.h"

void free_lk_list(control_t *list)
{
	lk_list_t *end;
	
	if (list->begin != NULL) {
		end = list->begin->prev;
		while (list->begin != end) {
			list->tmp = list->begin->next;
			free(list->begin);
			list->begin = list->tmp;
		}
		free(end);
	}
	free(list);
}

