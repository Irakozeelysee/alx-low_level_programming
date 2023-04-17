#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - the declaration
 *@name: name
 *@age: age
 *@owner: owner
 * Return: nothing.
 */
typedef struct dog
{
	char name[50];
	float age;
	char owner[50];
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
