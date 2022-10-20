#include "main.h"

/**
 *print_line - draw a straight line
 *@n: the length of the straight line
 */
void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
		_putchar('_');
	_putchar('\n');
}
