#include "main.h"
#include <stdlib.h>

int maloc(void);
/**
 * malloc_checked -allocates memory.
 * @b: int to use.
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
 * Return: 0.
 */
int maloc(void)
{
	void *p = malloc_checked(10);

	free(p);
	return (0);
}
