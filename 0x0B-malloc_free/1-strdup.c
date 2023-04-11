#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup -returns pointer to newly space.
 * @str: duplicated of the string.
 * Return: NULL.
 */

char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = (char *)malloc(strlen(str) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
