#include "main.h"
/**
  * _pow_recursion - returns value of x raisw to power of y.
  * @x: integer
  * @y: integer
  * Return: return -1, 1, or the power value
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
