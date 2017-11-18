/*
** EPITECH PROJECT, 2017
** File Name : lk_list.h
** File description:
** By Arthur Teisseire
*/

#ifndef LK_LIST_H
#define LK_LIST_H

#include "struct.h"

control_t *array_to_lk_list(int size, char **array);
lk_list_t *create_node(lk_list_t *next_node, int number);

#endif
