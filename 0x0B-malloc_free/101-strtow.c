#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - splits a string into words.
 * Return: NULL if str == NULL or str == ""
 */


char **strtow(char *str)
{
	int num_words;
	int i;
	char *start;
	char *end;
	char *word;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	words = (char **) malloc(sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	num_words = 0;
	start = NULL;
	end = NULL;
	while (*str != '\0')
	{
		while (*str == ' ')
		{
			str++;
		}
		start = str;
		while (*str != ' ' && *str != '\0')
		{
			str++;
		}
		end = str;
		word = (char *) malloc(end - start + 1);
		if (word == NULL)
		{
			for (i = 0; i < num_words; i++)
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		strncpy(word, start, end - start);
		word[end - start] = '\0';
		words[num_words] = word;
		num_words++;
		words = (char **) realloc(words, (num_words + 1) * sizeof(char *));
		if (words == NULL)
		{
			for (i = 0; i < num_words; i++)
			{
				free(words[i]);
			}
			return (NULL);
		}
		while (*str == ' ')
		{
			str++;
		}
	}
	words[num_words] = NULL;
	return (words);
}
