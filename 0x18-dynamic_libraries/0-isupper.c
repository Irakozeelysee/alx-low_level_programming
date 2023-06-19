#include "main.h"

/**
 * _isupper -Prints uppercase letters
 * @c: character to be checked
 *
 * Return: 0 0r 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
