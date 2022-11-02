#include "main.h"
/**
  * prime - finds prime number
  * @i: integer
  * @j: integer.
  * Return: return 1, 0, or prime numbwe
  */
int prime(int i, int j)
{
	if (i % j == 0)
	{
		if (i == j)
			return (1);
		else
			return (0);
	}
	return (prime(i, j + 1));
}
/**
  * is_prime_number - determines if intger is a prime number
  * @n: integer
  * Return: return 0 or 1
  */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	else
		return (prime(n, i));
}
