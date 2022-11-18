#include "variadic_functions.h"
/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of arguments
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list i;
	unsigned int j;
	int add = 0;

	if (n == 0)
		return (0);
	va_start(i, n);
	for (j = 0; j < n; j++)
		add += va_arg(i, int);
	va_end(i);
	return (add);
}
