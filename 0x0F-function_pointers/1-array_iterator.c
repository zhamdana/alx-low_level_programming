#include "function_pointers.h"
/**
  * array_iterator - execute a function given as a paramete
  * @array: input array
  * @size: array size
  * @action: pointer to function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action && array)
		for (a = 0; a < size; a++)
			action(array[a]);
}
