#include "main.h"
/**
  * factorial - returns the factorial of a given number
  * @n: integer
  * Return: returns -1, 1, or the factorial value
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
