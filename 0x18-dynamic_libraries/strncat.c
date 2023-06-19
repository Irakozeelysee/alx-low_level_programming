#include "main.h"

/**
 * _strncat -Concatenates strings
 * number is from src.
 * @dest: The string targeted.
 * @src: The string to append to dest.
 * @n: The number of bytes.
 * Return: Result.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
