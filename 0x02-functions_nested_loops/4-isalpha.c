#include "main.h"

/**
 *_isalpha - checks for alphabetic characters
 *Return: returns 0 or 1 when successful
 *@c: the parameter to be used in the function
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
	_putchar('\n');
}
