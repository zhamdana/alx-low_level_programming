#include "main.h"
/**
  * _strchr - locates character in a string
  * @c: the character to be located
  * @s: the string in which the charater will be found
  * Return: returns c or null
  */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (s + a);
		a++;
	}
	if (s[a] == c)
		return (s + a);
	return ('\0');
}
