#include <stdio.h>

/**
 * main -Entry point.
 * Description:  Single Digit numbers
 * separated with comma and space
 * add new line
 * Return:0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
