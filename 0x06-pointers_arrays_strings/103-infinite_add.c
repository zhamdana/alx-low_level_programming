#include <stdio.h>
#include "main.h"
/**
  * *infinite_add - function add two numbers
  * @n1: number
  * @n2: number
  * @r: buffer for storing result
  * @size_r: buffer size
  * Return: return r if successful
  **/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, sum = 0, i, j, k, l;

	for (; *(n1 + a) != '\0'; a++)
	for (; *(n2 + b) != '\0'; b++)
	if (a >= b)
		j = a;
	else
		j = b;
	if (size_r <= j + 1)
		return (0);
	r[j + 1] = '\0', a--, b--, size_r--, k = *(n1 + a) - 48, l = *(n2 + b) - 48;
	while (j >= 0)
	{
		i = k + l + sum;
		if (i >= 10 || a > 0)
			sum = i / 10, a--, k = *(n1 + a) - 48;
		else
			sum = 0, k = 0;
		if (i > 0 || b > 0)
			*(r + j) = (i % 10) + 48, b--, l = *(n2 + b) - 48;
		else
			*(r + j) = '0', l = 0, j--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
