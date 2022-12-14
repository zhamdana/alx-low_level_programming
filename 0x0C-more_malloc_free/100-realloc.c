#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate memory block
 * @ptr: pointer to previously allocated memory
 * @old_size: bytes of allocated pointer
 * @new_size: bytes of new allocation
 * Return: return pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
