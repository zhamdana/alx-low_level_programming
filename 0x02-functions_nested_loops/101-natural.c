#include <stdio.h>

/**
 *main - allows for listing of natural numbers
 *Return: returns 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			j += i;
	}
	printf("%d\n", j);
	return (0);

}
