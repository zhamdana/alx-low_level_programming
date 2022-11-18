#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: print string betwen numbers
 * @n: integer numbers passed by function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int j;

	va_start(i, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(i, int));
		if (separator && j < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(i);
}
