/*
** EPITECH PROJECT, 2017
** File Name : tools.c
** File description:
** By Arthur Teisseire
*/

void shift_left(int *array, int size)
{
	int i = 0;

	while (i < size - 1) {
		array[i] = array[i + 1];
		i++;
	}
}

void shift_right(int *array, int size)
{
	while (size >= 0) {
		array[size] = array[size - 1];
		size--;
	}
}
