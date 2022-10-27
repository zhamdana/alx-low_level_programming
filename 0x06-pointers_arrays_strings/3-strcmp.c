#include "main.h"
/**
  * _strcmp - compares two string
  * @s1: a pinter
  * @s2: source string
  * Return: returns to dest
  **/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
		s1++, s2++;
	return (*s1 - *s2);
}
