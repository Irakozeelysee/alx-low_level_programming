#include<stdio.h>
#include"dog.h"

/**
 * print_dog -Prints a struct dog.
 * @d: difines the struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %.1f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
