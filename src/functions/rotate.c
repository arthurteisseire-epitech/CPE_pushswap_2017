/*
** EPITECH PROJECT, 2017
** File Name : rotate.c
** File description:
** By Arthur Teisseire
*/

void rotate_left(int *array, int size)
{
	int stock = array[0];
	int i = 1;

	while (i < size - 1) {
		array[i] = array[i + 1];
		i++;
	}
	array[i] = stock;
}

void rotate_right(int *array, int size)
{
	int stock = array[size - 1];

	size--;
	while (size >= 0) {
		array[size] = array[size - 1];
		size--;
	}
	array[0] = stock;
}
