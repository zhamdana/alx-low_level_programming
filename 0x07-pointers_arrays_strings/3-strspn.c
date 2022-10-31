#include "main.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: intialization string
  * @accept: gives bytes
  * Return: accepted bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	for (a = 0; s[a] !='\0'; a++)
	{
		b = 1;
		for (c = 0; accept[c] !='\0'; c++)
		{
			if (s[a] ==  accept[c])
			{
				b = 0;
				break;
			}
		}
		if (b == 1)
		{
			break;
		}
	}
	return (a);
}
