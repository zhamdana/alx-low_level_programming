#include <stdio.h>
/**
*main - print single digit numbers of base 10 starting from 0 with putchar
*Return: 0 if successful
*/
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
