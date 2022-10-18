#include "main.h"

/**
 *_islower - hecks for lowercase alphabets
 *Return: returns 0 or 1 when successful
 *@c: the parameter to be used in the function
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
	_putchar('\n');
}
