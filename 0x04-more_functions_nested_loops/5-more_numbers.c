#include "main.h"

/**
 *more_numbers - prints numbers from 0 to 14
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
	}
	_putchar('\n');
}
