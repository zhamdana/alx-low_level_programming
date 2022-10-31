#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a matrix
 * @a: pointer.
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int b;
	int s1 = 0, s2 = 0;

	for (b = 0; b < size; b++)
	{
		s1 = s1 + a[b];
		a = a + size;
	}

	a = a - size;

	for (b = 0; b < size; b++)
	{
		s2 = s2 +  a[b];
		a = a - size;
	}

	printf("%d, %d\n", s1, s2);
}
