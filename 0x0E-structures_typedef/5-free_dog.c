#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory for dog
 * @d: memory of dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
