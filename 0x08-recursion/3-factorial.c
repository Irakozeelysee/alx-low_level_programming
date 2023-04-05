#include "main.h"

/**
 * factorial -Print calculated factorial.
 * @n: given number.
 *
 * Return: -1 error and factorial.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
