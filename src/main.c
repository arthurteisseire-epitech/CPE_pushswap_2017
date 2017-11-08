/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** By Arthur Teisseire
*/

#include <stdio.h>
#include "sort.h"

void print_tab(int *array, int size)
{
	for (int i = 0; i < size; i++)
		printf("[%d] - ", array[i]);
	printf("Fin\n");
}

int main(void)
{
	int array[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	print_tab(array, 8);
	rotate_left(array, 8);
	print_tab(array, 8);
}
