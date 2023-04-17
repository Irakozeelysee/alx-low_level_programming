#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - the declaration
 *@name: name
 *@age: age
 *@owner: owner
 * Return: nothing.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
