#include <stdio.h>

/**
 * main -Entry point
 * print from two digits without repeating any.
 * Return:0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			if (j != i)
			{
				putchar(i);
				putchar(j);
				if (i + j != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
