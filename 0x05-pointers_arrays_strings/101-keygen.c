#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - allows for keygen generation
 * Return: returns 0 if successful
 */
int main(void)
{
	unsigned int i = 0; 
	unsigned int j = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (j < 2772)
	{
		i = rand() % 128;
		if ((j + i) > 2772)
			break;
		j = j + i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
