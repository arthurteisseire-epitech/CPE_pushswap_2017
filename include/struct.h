/*
** EPITECH PROJECT, 2017
** File Name : struct.h
** File description:
** By Arthur Teisseire
*/

#ifndef STRUCT_H
#define STRUCT_H

#include <stdlib.h>

typedef struct lk_list {
	int nb;
	struct lk_list *next;
	struct lk_list *prev;
} lk_list_t;

typedef struct control {
	lk_list_t *begin;
	lk_list_t *tmp;
} control_t;

#endif
