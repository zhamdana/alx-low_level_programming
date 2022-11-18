#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: string printed between strings
 * @n: tring numbers passed in a function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int j;
	char *s;

	va_start(i, n);

	for (j = 0; j < n; j++)
	{
		s = va_arg(i, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(i);
}
