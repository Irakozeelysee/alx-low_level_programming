#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a function name.
 * @name: a pointer to name.
 * @f: function
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
