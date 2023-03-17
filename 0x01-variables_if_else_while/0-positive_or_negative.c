#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *int main -Determine if number is positive or negative.
 * Description: The if else condition test if number is negative or positive.
 * it prints out the results.
 * Return:0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
