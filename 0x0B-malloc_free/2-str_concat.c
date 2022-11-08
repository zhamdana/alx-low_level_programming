#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		j++;
	a = malloc(sizeof(char) * (j + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		a[i] = str[i];
	a[j] = '\0';
	return (a);
}
