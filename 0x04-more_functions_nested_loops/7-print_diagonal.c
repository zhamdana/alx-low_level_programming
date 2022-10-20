#include "main.h"

/**
 *print_diagonal - draw a diagonal line
 *@n: the length of the diagonal line
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (i == n - 1)
				{
				continue;
				}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
