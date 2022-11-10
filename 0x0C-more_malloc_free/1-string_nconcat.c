#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: string
 *@s2: string
 *@n: n bytes
 *Return: return pointer a
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = n, j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (j = 0; s1[j]; j++)
		i++;
	a = malloc(sizeof(char) * (i + 1));
	if (a == 0)
		return (0);
	i = 0;
	for (j = 0; s1[j]; j++)
		a[i++] = s1[j];
	for (j = 0; s2[j] && j < n; j++)
		a[i++] = s2[j];
	a[i] = '\0';
	return (a);
}
