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
	int i, j, k;

	p_d = malloc(sizeof(*p_d));
	if (p_d == NULL || !(name) || !(owner))
	{
		free(p_d);
		return (NULL);
	}
	for (j = 0; name[j]; j++)
		;
	for (k = 0; owner[k]; k++)
		;
	p_d->name = malloc(j + 1);
	p_d->owner = malloc(k + 1);

	if (!(p_d->name) || !(p_d->owner))
	{
		free(p_d->owner);
		free(p_d->name);
		free(p_d);
		return (NULL);
	}
	for (i = 0; i < j; i++)
		p_d->name[i] = name[i];
	p_d->name[i] = '\0';
	p_d->age = age;
	for (i = 0; i < k; i++)
		p_d->owner[i] = owner[i];
	p_d->owner[i] = '\0';
	return (p_d);
}

