#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @args: character
 * Return: nothing
 */

void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}
/**
 * print_int -prints integer
 * @args: character
 * Return: nothing
 */

void print_int(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
}

/**
 *print_float -prints float
 * @args: character
 * Return: nothing
 */

void print_float(va_list args)
{
	double num = va_arg(args, double);

	printf("%f", num);
}
/**
 * print_string -prints float
 * @args: character
 * Return: nothing
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s)
	{
		printf("%s", s);
	}
	else
	{
		printf("(nil)");
	}
}
/**
 * print_all -prints float
 * @format: charcter's format
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int index = 0;
	char current_char = format[index];

	va_start(args, format);
	while (current_char != '\0')
	{
		if (current_char == 'c')
		{
			print_char(args);
		}
		else if (current_char == 'i')
		{
			print_int(args);
		}
		else if (current_char == 'f')
		{
			print_float(args);
		}
		else if (current_char == 's')
		{
			print_string(args);
		}
		if (format[index + 1] != '\0')
		{
			printf(", ");
		}
		index++;
		current_char = format[index];
	}
	printf("\n");
	va_end(args);
}
