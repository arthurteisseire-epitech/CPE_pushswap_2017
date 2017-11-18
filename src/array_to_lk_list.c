/*
** EPITECH PROJECT, 2017
** File Name : array_to_lk_list.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "struct.h"

control_t *array_to_lk_list(int size, char **array)
{
	control_t *control = malloc(sizeof(control_t));
	lk_list_t *curr = malloc(sizeof(lk_list_t));

	control->end = curr;
	while (size > 1) {
		size--;
		control->tmp = malloc(sizeof(lk_list_t));
		control->tmp->nb = my_atoi(array[size]);
		control->tmp->next = curr;
		curr = control->tmp;
	}
	control->begin = curr;
	control->end->next = control->begin;
	return (control);
}
