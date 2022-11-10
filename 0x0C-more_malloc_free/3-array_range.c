#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: return pointer
 */
int *array_range(int min, int max)
{
	int *i, j, s = (max - min) + 1;

	if (min > max)
		return (NULL);
	i = malloc(sizeof(*i) * s);
	if (i == NULL)
		return (NULL);
	for (j = 0; min <= max; j++, min++)
		i[j] = min;
	return (i);
}
