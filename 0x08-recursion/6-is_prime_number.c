#include "main.h"

int prime_number(int n, int i);
/**
 * prime_number - checks if number is divisable.
 * @n: number to test.
 * @i: number we use to divide.
 * Return: number.
 */

int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_number(n, i - 1));
}
/**
 * is_prime_number -Checks prime number.
 * @n: number to be checked.
 * Return: 1 if is a prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
