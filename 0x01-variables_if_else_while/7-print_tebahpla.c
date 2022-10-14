#include <stdio.h>
/**
*main - print alphabets in reverse lowercase
*Return: 0 if successful
*/
int main(void)
{
	int j;

	j = 122;
	for (; j > 96; j--)
	{
		putchar (j);
	}
	putchar ('\n');
	return (0);
}
