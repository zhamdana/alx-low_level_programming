#include "main.h"
/**
 * print_number - print an integer
 * @n: input integer
 */

void print_number(int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
		i = n;
	j = i;
	k = 1;
	while (j > 9)
	{
		j = j / 10;
		k = k * 10;
	}
	for (; k >= 1; k = k / 10)
		_putchar(((i / k) % 10) + 48);
}
