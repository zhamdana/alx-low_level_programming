#include "main.h"

/**
 *_isupper - discovers uppercase characters
 *@c: is an input character
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 64 && c <= 91)
		return (1);
	else
		return (0);
}
