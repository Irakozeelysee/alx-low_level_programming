#include "main.h"
#include <stdlib.h>

int maloc();
/**
 * malloc_checked -allocates memory.
 * @p: pointer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
/**
 * maloc - allocates 10 bytes.
 * @p: pointer.
 * Return: 0.
 */

int maloc()
{
	void *p = malloc_checked(10);
	free(p);
	return (0);
}
