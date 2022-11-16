#include "3-calc.h"
/**
 * main - centry point
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*operat)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	operat = get_op_func(argv[2]);
	if (operat == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	printf("%d\n", operat(i, j));
	return (0);
}
