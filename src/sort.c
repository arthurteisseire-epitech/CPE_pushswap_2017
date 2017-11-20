/*
** EPITECH PROJECT, 2017
** File Name : sort.c
** File description:
** By Arthur Teisseire
*/

#include "lk_list.h"

void sort(control_t *la, control_t *lb, int len)
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
