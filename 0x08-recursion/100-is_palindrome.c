#include "main.h"
#include <stdio.h>
#include <string.h>

int palidrome_recursion(char *s, int start, int end);

/**
 * palidrome_recursion - Checks if string is palidrome.
 * @s: character to enter.
 * @start: from beginning.
 * @end: from the end.
 * Return: 1 if is palindrome or 0 error.
 */

int palidrome_recursion(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (palidrome_recursion(s, start + 1, end - 1));
}

/**
 * is_palindrome -calls the palidrome_recursion
 * @s: is the character
 * Return: result
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palidrome_recursion(s, 0, len - 1));
}
