#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates char array
 * @size: array size
 * @c: char storage
 * Return: array point
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	if (size == 0)
		return (NULL);
	i = malloc(sizeof(c) * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		j[i] = c;
	return (i);
}
