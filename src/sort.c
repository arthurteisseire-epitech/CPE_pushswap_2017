/*
** EPITECH PROJECT, 2017
** File Name : sort.c
** File description:
** By Arthur Teisseire
*/

#include "lk_list.h"

int find_bigger_nb(control_t *la)
{
	lk_list_t *curr = la->begin->next;
	int i = 0;
	int max = la->begin->nb;
	int bigger_index = 0;

	while (curr != la->begin) {
		if (curr->nb > max) {
			max = curr->nb;
			bigger_index = i;
		}
		i++;
		curr = curr->next;
	}
	return (bigger_index);
}

void move_node_to_first(control_t *la, int index, void (*move)(control_t *))
{
	while (index != 0) {
		move(la);
		index--;
	}
}

void sort(control_t *la, control_t *lb, int len)
{
	int pillar = (len - 1) / 2;
	int bigger_index;
	void (*move)(control_t *);

	while (la->begin != NULL) {
		bigger_index = find_bigger_nb(la);
		move = bigger_index <= pillar ? ra : rra;
		move_node_to_first(la, bigger_index, move);
		pb(la, lb);
		len--;
		pillar = (len - 1) / 2;
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
