#include <stdio.h>
#include "main.h"

/**
 * print_buffer - print buffer
 * @b: buffer
 * @size: buffer size
 */
void print_buffer(char *b, int size)
{
	int a, c, d;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a = a + 10)
		{
			printf("%.8x", a);
			for (c = a; c < a + 10; c++)
			{
				if (c % 2 == 0)
					printf(" ");
				if (c < size)
					printf("%.2x", *(b + c));
				else
					printf("  ");
			}
			printf(" ");
			for (d = a; d < a + 10; d++)
			{
				if (d >= size)
					break;
				if (*(b + d) <= 31 || *(b + d) >= 125)
					printf("%c", '.');
				else
					printf("%c", *(b + d));
			}
			printf("\n");
		}
	}
}
