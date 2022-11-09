#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all arguments of the program
 * @ac: arguments passed
 * @av: array pointers
 * Return: NULL or 0
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, k;
	int sz = ac;

	if (av == NULL || ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			sz++;
	}
	a = malloc(sizeof(char) * sz + 1);
	if (a == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			a[k++] = av[i][j];
		a[k++] = '\n';
	}
	a[sz] = '\0';
	return (a);
}
