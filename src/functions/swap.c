/*
** EPITECH PROJECT, 2017
** File Name : swap.c
** File description:
** By Arthur Teisseire
*/

#include "tools.h"

void swap(int *array, int size)
{
	int stock;

	if (size >= 2) {
		stock = array[0];
		array[0] = array[1];
		array[1] = stock;
	}
}

void sc(int *a, int size_a, int *b, int size_b)
{
	swap(a, size_a);
	swap(b, size_b);
}

void put(int *a, int size_a, int *b, int size_b)
{
	if (size_a >= 1) {
		if (size_b > 1)
			shift_right(b, size_b);
		b[0] = a[0];
	}
}
