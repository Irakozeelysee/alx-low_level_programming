#include <stdio.h>

/**
 * main -Entry point.
 * Description: three digits together.
 * there must be commas between them.
 * and commas are followed by space.
 * Return:0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int h;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (h = j + 1; h <= '9'; h++)
			{
				if ((i != j) && (j != h) && (i != h))
				{
					putchar(i);
					putchar(j);
					putchar(h);
					if (i == '7')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
