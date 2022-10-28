#include "main.h"
/**
  * reverse_array - reverse the content of an integer array
  * @a: integer array reversal
  * @n: array elements number
  **/
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k[1021];
	int l;

	l = n - 1;
	for (i = 0; i < n; i++)
	{
		k[i] = a[l];
		l--;
	}
	for (j = 0; j < n; j++)
		a[j] = k[j];
}
