#include "main.h"
#include <unistd.h>

/**
 * _putchar -writes the character c to stdout.
 * @: the character to print.
 * Return: on sucess 1.
 * on error, -1 is returned, an errno is set approprietely.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
