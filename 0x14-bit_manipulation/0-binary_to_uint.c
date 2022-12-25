#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int j, k;

	if (!b)
		return (0);
	i = 0;
	for (j = 0; b[j] != '\0'; j++)
		;
	for (j--, k = 1; j >= 0; j--, k *= 2)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] & 1)
		{
			i += k;
		}
	}
	return (i);
}
