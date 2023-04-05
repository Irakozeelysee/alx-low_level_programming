#include "main.h"

/**
 * _pow_recursion -Pows two numbers.
 * @x: the first number
 * @y: the second number.
 *
 * Return: -1 if y >0.
 * else multiply.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *  _pow_recursion(x, y - 1));
	}
}
