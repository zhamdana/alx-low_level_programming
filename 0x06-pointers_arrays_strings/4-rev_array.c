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

	for (j = n - 1; j >= n / 2; j--)
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
}
