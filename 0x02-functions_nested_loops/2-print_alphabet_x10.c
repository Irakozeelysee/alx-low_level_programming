#include "main.h"

/**
 * print_alphabet_x10 -print alphabet 10 times.
 * return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}

