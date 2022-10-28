#include "main.h"
/**
  * *string_toupper - changes all lowercase letters of a string to uppercase
  * @i: inout string
  * Return: return i
  **/
char *string_toupper(char *i)
{
	int j;

	j = 0;
	while (i[j])
	{
		if (i[j] >= 'a' && i[j] <= 'z')
			i[j] -= 32;
		j++;
	}
	return (i);
}
