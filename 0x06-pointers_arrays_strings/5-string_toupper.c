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
	int k;

	for (i = 0; i < n; i++)
	{
		for (j = i +1; j > 0; j--)
		{
			k = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = k
		}
	}
}
