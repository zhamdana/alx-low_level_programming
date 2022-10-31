#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to find
 * Return: return pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b != '\0' && *haystack != '\0' && *b == *haystack)
			b++, haystack++;
		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return (0);
}
