#include "main.h"
/**
  * _memcpy - fills memory with a constant byte
  * @dest: destination character pointer
  * @src: source character pointer
  * @n: unsigned integer SRC length
  * Return: returns pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
