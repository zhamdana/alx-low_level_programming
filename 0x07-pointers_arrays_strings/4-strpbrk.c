#include "main.h"
/**
  * _strpbrk - searchs a string for any of a set of bytes
  * @s: searching string
  * @accept: search bytes in
  * Return: return s or null
  */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		a++;
		while (accept[b] != '\0')
		{
			b++;
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return ('\0');
}
