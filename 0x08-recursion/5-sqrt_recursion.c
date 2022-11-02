#include "main.h"
/**
  * sqr_optr - returns the root of a number.
  * @i: integer
  * @j: integer
  * Return: return -1 or sqaure root
  */
int sqr_optr(int i, int j)
{
	if ((j * j) == i)
		return (j);
	if (j == i / 2)
		return (-1);
	return (sqr_optr(i, j + 1) + 0);
}
/**
  * _sqrt_recursion - returns value square of a number.
  * @n: integer
  * Return: return -1, 1, or the square root value
  */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqr_optr(n, i));
}
