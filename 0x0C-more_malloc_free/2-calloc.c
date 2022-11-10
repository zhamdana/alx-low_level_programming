#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: element number
 * @size: byte size
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	a = malloc(nmemb * size);
	if (a == 0)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return (a);
}
