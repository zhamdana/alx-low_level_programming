#include <stdio.h>

/**
 *main - print even Fibonacci numbers
 *Return: returns 0
 */
int main(void)
{
	long int c, s, f1, f2;

	f1 = 1;
	f2 = 2;
	c = s = 0;
	while (c <= 4000000)
	{
		c = f1 + f2;
		f1 = f2;
		f2 = c;
		if ((f1 % 2) == 0)
			s += f1;
	}
	printf("%ld\n", s);
	return (0);

}
