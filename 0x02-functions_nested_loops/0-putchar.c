#include "main.h"

/**
  * main - prints _putchar followed by newline
  *Return: returns 0 when successful
  */
int main(void)
{
	int word[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int c, s;

	s = sizeof(word) / sizeof(int);
	for (c = 0; c < s; c++)
	{
		_putchar(word[c]);
	}
	_putchar('\n');
	return (0);
}
