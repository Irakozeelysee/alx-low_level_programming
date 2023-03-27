#include "main.h"
#include <stdio.h>

/**
 * swap_int -Swaps the values of integers.
 * @a: Is the first integer.
 * @b: Is the second integer.
 *
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
