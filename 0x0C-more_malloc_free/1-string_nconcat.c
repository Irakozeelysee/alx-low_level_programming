#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: memory.
 * Return: NULL or pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len, s2_len, copy_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	s1_len = strlen(s1);
	s2_len = (s2 == NULL) ? 0 : strlen(s2);
	copy_len = (s2_len < n) ? s2_len : n;
	result = malloc(s1_len + copy_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strncpy(result, s1, s1_len);
	strncpy(result + s1_len, s2, copy_len);
	result[s1_len + copy_len] = '\0';
	return (result);
}
