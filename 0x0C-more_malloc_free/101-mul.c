#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multiplies two numbers.
 * @num1: first number.
 * @num2: second number.
 * Return: results.
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - Assigns numbers.
 * @argc: character.
 * @argv: array of character.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	char *num1_str, *num2_str;
	int i, num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];
	for (i = 0; num1_str[i] != '\0'; i++)
	{
		if (!isdigit(num1_str[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2_str[i] != '\0'; i++)
	{
		if (!isdigit(num2_str[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	num1 = atoi(num1_str);
	num2 = atoi(num2_str);
	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
