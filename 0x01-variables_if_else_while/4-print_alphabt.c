#include <stdio.h>

/**
 * main -Entry point.
 * Description: play with alphabet except 2.
 * Return:0 (Success)
 */

int main(void)
{
	char alp[24] = "abcdfghilkmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
