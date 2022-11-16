#include "3-calc.h"
/**
 * get_op_func - select the function to work
 * @s: operator
 * Return: returns pointer to operating function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;

	while (a < 10)
	{
		if (s[0] == ops->op[a])
			break;
		a++;
	}

	return (ops[a / 2].f);
}
