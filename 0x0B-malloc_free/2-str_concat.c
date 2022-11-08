#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: s1, s2, or null
 */
char *str_concat(char *s1, char *s2)
{
	char *cs;
	unsigned int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		k++;
	cs = malloc(sizeof(char) * k);
	if (cs == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		cs[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		cs[j++] = s2[i];
	return (cs);
}
