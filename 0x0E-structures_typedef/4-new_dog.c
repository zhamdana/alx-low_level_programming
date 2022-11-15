#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: struct dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_d;
	int a, b, c;

	p_d = malloc(sizeof(*p_d));
	if (p_d == NULL || !(name) || !(owner))
	{
		free(p_d);
		return (NULL);
	}
	for (b = 0; name[b]; b++)
		;
	for (c = 0; owner[c]; c++)
		;
	p_d->name = malloc(b + 1);
	p_d->owner = malloc(c + 1);
	if (!(p_d->name) || !(p_d->owner))
	{
		free(p_d->owner);
		free(p_d->name);
		free(p_d);
		return (NULL);
	}
	for (a = 0; a < b; a++)
	p_d->name[a] = '\0';
	p_d->name[a] = '\0';
	p_d->age = age;

	for (a = 0; a < c; a++)
		p_d->owner[a] = owner[a];
	p_d->owner[a] = '\0';
	return (p_d);
}
