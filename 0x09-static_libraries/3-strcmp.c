#include "main.h"

/**
 * _strcmp -comparison.
 * @s1: A pointer to the first string.
 * @s2: A pointer to the second string.
 * Return: If str1 < str2, the negative difference
 * of the first unmatched characters.
 * If str1 == str2, 0.
 * if str1 > str2, the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
