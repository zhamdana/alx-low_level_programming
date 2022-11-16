#include "function_pointers.h"

/**
 * int_index - searche for an integer
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: -1, 0, or 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp && array)
	{
		if (size <= 0)
			return (-1);
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]))
				return (a);
		}
	}
	return (-1);
}
