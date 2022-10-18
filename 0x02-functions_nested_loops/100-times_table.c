#include "main.h"

/**
 * print_times_table - Print times table
 *@n: number
 *Return: returns 0
 */
void print_times_table(int n)
{
int i;
int j;
int k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				_putchar(',');
				_putchar(' ');
				if (k <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(op + '0');
				}
				else if (op <= 99)
				{
					_putchar('0');
					_putchar((op / 10) + '0');
					_putchar((op % 10) + '0');
				}
				else
				{
					_putchar(((op / 100) % 10) + '0');
					_putchar(((op / 10) % 10) + '0');
					_putchar((op % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
