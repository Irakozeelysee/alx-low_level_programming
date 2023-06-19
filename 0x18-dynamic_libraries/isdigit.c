#include "main.h"

/**
 * _isdigit -Checks if a given character is a digit.
 * @c: is the character to be checked.
 *
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
