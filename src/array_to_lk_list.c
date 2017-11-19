/*
** EPITECH PROJECT, 2017
** File Name : array_to_lk_list.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "struct.h"
#include "lk_list.h"

control_t *array_to_lk_list(int size, char **array)
{
	control_t *list = malloc(sizeof(control_t));
	lk_list_t *curr = malloc(sizeof(lk_list_t));
	lk_list_t *end = curr;

	size--;
	end->nb = my_atoi(array[size]);
	while (size > 0) {
		size--;
		curr = create_node(curr, my_atoi(array[size]));
	}
	list->begin = curr;
	list->begin->prev = end;
	end->next = list->begin;
	return (list);
}

lk_list_t *create_node(lk_list_t *next_node, int number)
{
	lk_list_t *new = malloc(sizeof(lk_list_t));

	new->nb = number;
	new->next = next_node;
	next_node->prev = new;
	return (new);
}
