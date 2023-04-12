#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - splits a string into words.
 * @str: string to use
 * Return: NULL if str == NULL or str == ""
 */


char **strtow(char *str)
{
	int len;
	int i, j, k = 0;
	char **words;
	int word_len;

	if ((str == NULL) || (*str == '\0') || (*str == ' ' && *(str + 1) == '\0'))
	{
		return (NULL);
	}
	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{

			j = i;
		       while (j < len && str[j] != ' ')
			       j++;
		       word_len = j - i;
			words[k] = malloc((word_len + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (k--; k >= 0; k--)
					free(words[k]);
				free(words);
				return (NULL);
			}
			strncpy(words[k], &str[i], word_len);
			words[k][word_len] = '\0';
			k++;
			i = j;
		}
	}
	words[k] = NULL;
	return (words);
}
