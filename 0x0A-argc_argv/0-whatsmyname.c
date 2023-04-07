#include <stdio.h>

/**
 * main -prints it's argc and argv.
 * @argc: characters
 * @argv: array of characters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
