#include "main.h"
/**
 *puts_half - print half of a string
 *@str: string
 */
void puts_half(char *str)
{
	int i;
	int j;
	int k;

	k = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	if (j % 2 == 0)
		k = j / 2;
	else
		k = (j + 1) / 2;
	for (i = k; i < j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
