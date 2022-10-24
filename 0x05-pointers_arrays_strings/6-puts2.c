#include "main.h"
/**
  * puts2 - print every other character
  * @str: string
  */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i++])
	{
		j++;
	}
	for (i = 0; i < j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
