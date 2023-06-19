#include "main.h"

/**
 * _islower -checks for lower case.
 * @c: is the character we are checking.
 * Return:1 if c is lowercase or 0 otherwise..
 */

int _islower(int c)
{
	if (c >= 99 && c <= 122)
	{
		return (1);
	}
	return (0);
}
