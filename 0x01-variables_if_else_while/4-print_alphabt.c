#include <stdio.h>
/**
*main - prints lowercase except q and e
*Return: 0 if successful
*/
int main(void)
{
	int j;
	char ch = 'a';

	j = 0;

		while (j != 24)
		{
		if (ch == 'e')
		ch++;
		if (ch == 'q')
		ch++;
		putchar (ch);
		j++;
		ch++;
		if (j == 24)
		putchar ('\n');
		}
	return (0);
}
