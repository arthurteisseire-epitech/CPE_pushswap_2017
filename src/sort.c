/*
** EPITECH PROJECT, 2017
** File Name : sort.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "lk_list.h"

void sort(control_t *la, control_t *lb, int len)
{
	int bigger_index;

	while (la->begin != NULL) {
		bigger_index = find_lower_nb(la);
		move_node_to_first(la, bigger_index, len);
		pb(la, lb);
		len--;
	}
	while (lb->begin != NULL)
		pa(lb, la);
}

int find_lower_nb(control_t *la)
{
	lk_list_t *curr = la->begin->next;
	int min = la->begin->nb;
	int bigger_index = 1;
	int curr_index = 2;

	while (curr != la->begin) {
		if (curr->nb < min) {
			min = curr->nb;
			bigger_index = curr_index;
		}
		curr_index++;
		curr = curr->next;
	}
	return (bigger_index);
}

static void fill(control_t *la, char *buffer, char *str, int *it)
{
	if (la->begin != la->begin->next)
		while (*str != '\0') {
			buffer[*it] = *str;
			(*it)++;
			str++;
		}
}

void move_node_to_first(control_t *la, int index, int len)
{
	char *buffer;
	int it = 0;

	if (index <= len / 2) {
		buffer = malloc(sizeof(char) * (index + 1) * 3);
		while (index != 1) {
			ra(la);
			fill(la, buffer, "ra ", &it);
			index--;
		}
	} else {
		buffer = malloc(sizeof(char) * (len - index + 1) * 4);
		while (index <= len) {
			rra(la);
			fill(la, buffer, "rra ", &it);
			index++;
		}
	}
	write(1, buffer, it);
	free(buffer);
}
