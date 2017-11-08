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

Test(all, empty)
{
	int a[0] = {};
	int b[0] = {};

	rotate_right(a, 0);
	rotate_left(a, 0);
	rotate_right(b, 0);
	rotate_left(b, 0);
	swap(a, 0);
	sc(a, 0, b, 0);
}

Test(all, one_elem)
{
	int a[1] = {2};
	int b[1] = {2};

	rotate_right(a, 1);
	rotate_left(a, 1);
	rotate_right(b, 1);
	rotate_left(b, 1);
	swap(a, 1);
	sc(a, 1, b, 1);
}

Test(all, two_elem)
{
	int a[2] = {2, 3};
	int b[2] = {2, 3};

	rotate_right(a, 2);
	rotate_left(a, 2);
	rotate_right(b, 2);
	rotate_left(b, 2);
	swap(a, 2);
	sc(a, 2, b, 2);
}
