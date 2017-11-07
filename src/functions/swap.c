/*
** EPITECH PROJECT, 2017
** File Name : swap.c
** File description:
** By Arthur Teisseire
*/

void swap(int *array)
{
	int stock = array[0];

	array[0] = array[1];
	array[1] = stock;
}
