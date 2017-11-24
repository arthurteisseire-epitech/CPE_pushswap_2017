/*
** EPITECH PROJECT, 2017
** File Name : lk_list.h
** File description:
** By Arthur Teisseire
*/

#ifndef LK_LIST_H
#define LK_LIST_H

#include "my_alloc.h"
#include "struct.h"

#define malloc my_alloc

control_t *array_to_lk_list(int size, char **array);
lk_list_t *create_node(lk_list_t *next_node, int number);
void free_lk_list(control_t *list);

void ra(control_t *la);
void rb(control_t *lb);
void rr(control_t *la, control_t *lb);

void rra(control_t *la);
void rrb(control_t *lb);
void rrr(control_t *la, control_t *lb);

void sa(control_t *la);
void sb(control_t *lb);
void sc(control_t *la, control_t *lb);

void pa(control_t *lb, control_t *la);
void pb(control_t *la, control_t *lb);

void sort(control_t *la, control_t *lb, int len);
int is_sorted(control_t *list);
void move_node_to_first(control_t *la, int index, int len);
int find_bigger_nb(control_t *la);

#endif
