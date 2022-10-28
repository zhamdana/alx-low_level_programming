#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @i: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *i)
{
	int j, k = 0;
	char a1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (j = 0; i[j] != '\0'; j++)
	{
		j = 0;
		while (!(a2[k] == i[j]) && k <= 52)
			k++;
		if (a2[k] == i[j])
			i[j] = a1[k];
	}
	return (i);
}
