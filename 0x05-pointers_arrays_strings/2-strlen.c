#include "main.h"
/**
  * void swap_int - swap values of integers
  *@a: integer.
  *@b: integer
  **/
void swap_int(int *a, int *b);
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
