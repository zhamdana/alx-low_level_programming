#include "main.h"

/**
 *print_diagonal - draw a diagonal line
 *@n: the length of the diagonal line
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
			if (n > 0)
		{
			_putchar(92);
			_putchar('\n');
		}
	}
}
