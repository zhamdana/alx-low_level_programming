#include "main.h"

/**
 *_isupper - discovers numbers between 0 to 9
 *@c: is an input character
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
