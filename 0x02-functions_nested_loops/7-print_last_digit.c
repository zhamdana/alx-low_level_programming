#include "main.h"

/**
 *print_last_digit - Print the last digit of a number
 *Return: returns last digit
 *@j: the parameter to be used in the function
 */
int print_last_digit(int j)
{
	int last = j % 10;

	if (j <  0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}
}
