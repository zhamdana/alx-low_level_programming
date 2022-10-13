#include <stdio.h>
/**
*main - this function allows for use of printf.
*Return: ensures main returns to 0.
*/
int main(void)
{
	char a;
	int i;
	long int j;
	long long int l;
	float d;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
