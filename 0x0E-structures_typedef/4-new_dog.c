#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * *new_dog - Creates a new dog
 * @owner: name of owner
 * @name: name of new dog
 * @age: new dog age
 *
 * Return: NULL or New dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = strlen(name) + 1;
		own_l = strlen(owner) + 1;
		new_dog = malloc(sizeof(dog_t));

		if (new_dog == NULL)
			return (NULL);
		new_dog->name = malloc(sizeof(char) * name_l);

		if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
		new_dog->owner = malloc(sizeof(char) * own_l);

		if (new_dog->owner == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		new_dog->name = _strcpy(new_dog->name, name);
		new_dog->owner = _strcpy(new_dog->owner, owner);
		new_dog->age = age;
	}
	return (new_dog);
}

/**
 * _strlen -Returns the length of string
 * @s: String
 * Return: String.
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
/**
 * _strcpy - Copies a string
 * @dest: destination
 * @src: source
 * Return: The pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
