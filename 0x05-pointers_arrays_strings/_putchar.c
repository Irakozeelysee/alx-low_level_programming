#include "main.h"
#include <unistd.h>

/**
 * _puthacr -writes the character c to stdout.
 * @ c: the character to be printed
 * Return: 1 success
 * on error, -1 
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
