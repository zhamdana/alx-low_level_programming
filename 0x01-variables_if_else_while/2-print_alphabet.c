#include <stdio.h>
/**
*main - print alphabets in lowercase
*Return: 0 if successful
*/
int main(void)
{
	int j;
	char ch = 'a';

	j = 0;

	while (j != 26)
	{
		putchar (ch);
		ch++;
		j++;
		if (j == 26)
		putchar ('\n');
	}
	return (0);
}
