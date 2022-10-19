#include <stdio.h>

/**
 *main - print even Fibonacci numbers
 *Return: returns 0
 */
int main(void)
{
	long double c, s, f1, f2;

	f1 = 1;
	f2 = 2;
	printf("%.LF, ", f1);
	printf("%.LF, ", f2);
	for (c = 0; c < 96; c++)
	{
		s = f1 + f2;
		f1 = f2;
		f2 = s;
		printf("%.LF", s);
		if (c != 95)
		printf(", ");
	}
	printf("\n");
	return (0);
}
