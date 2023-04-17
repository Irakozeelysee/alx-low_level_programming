#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - the declaration
 * @name: name
 * @age: age
 * @owner: owner
 * Return: nothing.
 */

typedef struct dog
{
	char *name;
	float age;
	char owner;
};
dog_t *new_dog(char *name, float age, char *owner);

#endif
