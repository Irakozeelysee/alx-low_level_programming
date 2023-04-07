#include "main.h"

/**
 * _strncpy -Copies an inputted number of bytes.
 * from string src into dest.
 *
 * @dest: Targeted file.
 * @src: source file.
 * @n: The maximun number of bytes to be copied.
 *
 * Return: A pointer to the result.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
