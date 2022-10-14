#include <stdio.h>
/**
*main - print numbers from 0 to 9 with comma and space
*Return: 0 if successful
*/
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
		if (j !=57)
		{	
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
