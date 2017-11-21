/*
** EPITECH PROJECT, 2017
** File Name : my_alloc.c
** File description:
** By Arthur Teisseire
*/

#include "my_alloc.h"

void *my_alloc(size_t size)
{
	void *ptr = malloc(size);

	if (ptr == NULL)
		exit (84);
	return (ptr);
}
