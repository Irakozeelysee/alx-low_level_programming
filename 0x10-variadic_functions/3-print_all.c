#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints a character
 * @format: of character
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c_arg, *s_arg;
	int i_arg, i = 0, j = 0;
	float f_arg;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c_arg = va_arg(args, int);
				printf("%c", c_arg);
				break;
			case 'i':
				i_arg = va_arg(args, int);
				printf("%d", i_arg);
				break;
			case 'f':
				f_arg = va_arg(args, double);
				printf("%f", f_arg);
				break;
			case 's':
				s_arg = va_arg(args, char *);
				if (s_arg == NULL)
				{
					printf("(nil)");
				}
				printf("%s", s_arg);
				break;
			default:
				j++;
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
