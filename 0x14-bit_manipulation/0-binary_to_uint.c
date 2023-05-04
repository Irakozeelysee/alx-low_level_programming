#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;

	if (!b)
		return (0);
	for (bit = 0; b[bit] != '\0'; bit++)
	{
		if (b[bit] != '0' && b[bit] != '1')
			return (0);
		result <<= 1;
		if (b[bit] == '1')
			result += 1;
	}
	return (result);
}
