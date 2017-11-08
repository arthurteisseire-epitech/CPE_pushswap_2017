/*
** EPITECH PROJECT, 2017
** File Name : rotate.c
** File description:
** By Arthur Teisseire
*/

#include "tools.h"

void rotate_left(int *array, int size)
{
	int stock;

	if (size > 1) {
		stock = array[0];
		shift_left(array, size);
		array[size - 1] = stock;
	}
}

void rotate_right(int *array, int size)
{
	int stock;

	if (size > 1) {
		size--;
		stock = array[size];
		shift_right(array, size);
		array[0] = stock;
	}
}

void rr(int *a, int size_a, int *b, int size_b)
{
	rotate_left(a, size_a);
	rotate_left(b, size_b);
}

void rrr(int *a, int size_a, int *b, int size_b)
{
	rotate_right(a, size_a);
	rotate_right(b, size_b);
}
