#include "main.h"
#include <stdio.h>

/**
 * is_prime_number -Checks prime number.
 * @n: number to be checked.
 * @i: ilterate number.
 * Return: 1 if is a prime number.
 */

int is_prime_number(int n)
{
	int i = 5;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if ((n % 2 == 0) || (n % 3 == 0))
		return (0);
	while (i * i <= n)
	{
		if ((n % i == 0) || (n % (i + 2) == 0))
		{
			return (0);
		}
		i += 6;
	}
	return (1);
}
