#include "main.h"
/**
 * _atoi - changes string to integer
 * @s: string value
 * Return: returns the assigned value
 */
int _atoi(char *s)
{
	int i = 1;
	unsigned int j;

	j = 0;
	do {
		if (*s == 45)
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			j = (j * 10) + (*s - '0');
		}
		else if (j > 0)
			break;
	} while (*s++);
	return (i * j);
}

