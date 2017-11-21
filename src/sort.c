/*
** EPITECH PROJECT, 2017
** File Name : sort.c
** File description:
** By Arthur Teisseire
*/

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

void move_node_to_first(control_t *la, int index, int len)
{
	if (index <= len / 2) {
		while (index != 1) {
			ra(la);
			index--;
		}
	} else {
		while (index < len + 1) {
			rra(la);
			index++;
		}
	}
}
/*
static void sort_bubble(control_t *la, control_t *lb, int len)
{
	int it_1 = 0;
	int sorted_element_nb = 1;
	int not_sorted = 1;

	while (not_sorted == 1) {
		not_sorted = 0;
		while (it_1 < len - sorted_element_nb) {
			if (la->begin->nb > la->begin->next->nb) {
				sa(la);
				not_sorted = 1;
			}
			ra(la);
			it_1++;
		}
		it_1 = 0;
		for (int it_2 = 0; it_2 < sorted_element_nb; it_2++)
			ra(la);
	}
}
*/
