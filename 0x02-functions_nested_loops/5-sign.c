#include "main.h"

/**
 *print_sign - Prints the sign of a number
 *Return: returns 1, 0, or -1 when successful
 *@n: the parameter to be used in the function
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if else (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return (0);
	}
	_putchar('\n');
}
