#include <stdio.h>
/**
*main - prints lowercase and the uppercase letters of the alphabet
*Return: 0 if successful
*/
int main(void)
{
	int i, j;
	char ch = 'a';
	char u = 'A';

	i = 0;

		while (i != 26)
		{
		putchar (ch);
		ch++;
		i++;
		}
		while (j != 26)
		{
		putchar (u);
		j++;
		u++;
		}
		if (j == 26)
		{
		putchar ('\n');
		}
	return (0);
}
