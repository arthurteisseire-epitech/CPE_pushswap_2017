/*
** EPITECH PROJECT, 2017
** File Name : tests_match.c
** File description:
** By Arthur Teisseire
*/

#include <criterion/criterion.h>
#include <criterion/logging.h>
#include "sort.h"

Test(swap, s)
{
	int array[5] = {1, 2, 3, 4, 5};
	int res[5] = {2, 1, 3, 4, 5};

	swap(array, 5);
	cr_assert_arr_eq(array, res, sizeof(int) * 5);
}

Test(swap, sc)
{
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {1, 2, 3, 4, 5};

	sc(a, 5, b, 5);
	cr_assert_arr_eq(a, b, sizeof(int) * 5);
}

Test(rotate, r)
{
	int array[5] = {1, 2, 3, 4, 5};
	int res[5] = {2, 3, 4, 5, 1};

	rotate_left(array, 5);
	cr_assert_arr_eq(array, res, sizeof(int) * 5);
}

Test(rotate, rr)
{
	int array[5] = {1, 2, 3, 4, 5};
	int res[5] = {5, 1, 2, 3, 4};

	rotate_right(array, 5);
	cr_assert_arr_eq(array, res, sizeof(int) * 5);
}
