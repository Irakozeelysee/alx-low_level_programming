#include "main.h"
#include <stdlib.h>

/**
 * *create_array -creates an array of chars.
 * @size: specifies the length of the array.
 * @c: character with which to initialize the array.
 * Return: NULL fails or a pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
