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
		bigger_index = find_bigger_nb(la);
		move_node_to_first(la, bigger_index, len);
		pb(la, lb);
		len--;
	}
}

int find_bigger_nb(control_t *la)
{
	lk_list_t *curr = la->begin->next;
	int max = la->begin->nb;
	int bigger_index = 1;
	int curr_index = 2;

	while (curr != la->begin) {
		if (curr->nb > max) {
			max = curr->nb;
			bigger_index = curr_index;
		}
		curr_index++;
		curr = curr->next;
	}
	return (bigger_index);
}

static void fill(char *buffer, char *str, int *it)
{
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
			fill(buffer, "ra ", &it);
			index--;
		}
	} else {
		buffer = malloc(sizeof(char) * (len - index + 1) * 4);
		while (index < len + 1) {
			rra(la);
			fill(buffer, "rra ", &it);
			index++;
		}
	}
	write(1, buffer, it);
	free(buffer);
}
