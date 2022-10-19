#include <stdio.h>

/**
 *main - allows for adding of Fibonacci numbers
 *Return: returns 0
 */
int main(void)
{
	long int c, s, f1, f2;

	f1 = 1;
	f2 = 2;
	printf("%ld, %ld", f1, f2);
	for (c = 0; c < 48; c++)
	{
		s = f1 + f2;
		printf(", %ld", s);
		f1 = f2;
		f2 = s;
	}
	printf("\n");
	return (0);

}
