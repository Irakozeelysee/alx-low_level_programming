#include <stdio.h>

/**
 * main -Entry point.
 * Description: Print numbers of base 16.
 * Return:0 (Success)
 */

int main(void)
{
	int i;
	int alp;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
