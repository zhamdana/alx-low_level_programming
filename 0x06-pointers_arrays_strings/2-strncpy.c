#include "main.h"
/**
  * _strncpy - cpies a string
  * @dest: a pinter
  * @src: source string
  * @n:an integer
  * Return: returns to dest
  **/
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	for (; k < n; k++)
		dest[k] = '\0';
	return (dest);
}
