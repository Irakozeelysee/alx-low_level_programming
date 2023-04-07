#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -Calculated sum of digits
 * @argc: arguments.
 * @argv: arrays of arguments.
 * @arg: array of j
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 1, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi (arg);
	}
	printf("%d\n", sum);
	return (0);
}
