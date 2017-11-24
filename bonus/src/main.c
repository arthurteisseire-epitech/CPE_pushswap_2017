/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "lk_list.h"

int main(int ac, char **av)
{
	control_t *la;
	control_t *lb = malloc(sizeof(control_t));
	int is_flag;

	if (ac < 2)
		return (84);
	ac--;
	av++;
	is_flag = check_flags(ac, av);
	if (is_flag)
		av++;
	la = array_to_lk_list(ac, av);
	lb->begin = NULL;
	if (is_sorted(la)) {
		write(1, "\n", 1);
		return (0);
	}
	sort(la, lb, ac);
	if (is_flag) {
		my_show_lk_list(la);
		my_show_lk_list(lb);
		my_show_rev_lk_list(la);
		my_show_rev_lk_list(lb);
	}
	free_lk_list(la);
	free_lk_list(lb);
	return (0);
}
