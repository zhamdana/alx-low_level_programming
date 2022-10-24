#include "main.h"
/**
  * rev_string - reverse string
  * @s: string
  */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char r;

	while (s[j++])
		i++;

	for (j = i - 1; j >= i / 2; j--)
	{
		r = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = r;
	}
}
