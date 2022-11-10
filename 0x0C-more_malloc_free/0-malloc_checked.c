#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: bytes
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit('b');
	return (a);
}
