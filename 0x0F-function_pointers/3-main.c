#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 98, 99 or 100 if error
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
