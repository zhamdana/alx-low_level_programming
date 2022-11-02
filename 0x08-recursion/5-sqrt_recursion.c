#include "main.h"
/**
  * square_operator - returns the root of a number.
  * @i: integer
  * @j: integer
  * Return: return -1 or sqaure root
  */
int sqaure_operator(int i, int j)
{
	if (i * (j / i) == i)
		return (j);
	else if
		return (-1);
	else
		return (square_operator(i, j + 1));
}
/**
  * _sqrt_recursion - returns value square of a number.
  * @n: integer
  * Return: return -1, 1, or the square root value
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (square_operator(n, j));
}
