#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * zero_finder - find numbers that are zero
 * @argv: vector argument
 */
void zero_finder(char *argv[])
{
	int n, n1 = 1, n2 = 1;

	for (n = 0; argv[1][n]; n++)
		if (argv[1][n] != '0')
		{
			n1 = 0;
			break;
		}
	for (n = 0; argv[2][n]; n++)
		if (argv[2][n] != '0')
		{
			n2 = 0;
			break;
		}
	if (n1 == 1 || n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}
/**
 * array_initializer - make new array memory 0
 * @ary: character array
 * @l: character array length
 * Return: return pinter
 */
char *array_initializer(char *ary, int l)
{
	int n = 0;

	for (n = 0; n < l; n++)
		ary[n] = '0';
	ary[l] = '\0';
	return (ary);
}
/**
 * check_number - check number length and if base 10
 * @argv: arguments vector
 * @n: array row
 * Return: return number length
 */
int check_number(char *argv[], int n)
{
	int l;

	for (l = 0; argv[n][l]; l++)
		if (!isdigit(argv[n][l]))
		{
			printf("Error\n");
			exit(98);
		}
	return (l);
}
/**
 * main - entry point for multiplying two positive numbers
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: return integer
 */
int main(int argc, char *argv[])
{
	int l1, l2, i, j, sum, sumt, x, y, z;
	char *a;

	if (argc != 3)
		printf("Error\n"), exit(98);
	l1 = check_number(argv, 1), l2 = check_number(argv, 2);
	zero_finder(argv), i = l1 + l2, a = malloc(i + 1);
	if (a == NULL)
		printf("Error\n"), exit(98);
	a = array_initializer(a, i);
	z = i - 1, x = l1 - 1, y = l2 - 1, j = sumt = 0;
	for (; z >= 0; z--, x--)
	{
		if (x < 0)
		{
			if (sumt > 0)
			{
				sum = (a[z] - '0') + sumt;
				if (sum > 9)
					a[z - 1] = (sum / 10) + '0';
				a[z] = (sum % 10) + '0';
			}
			x = l1 - 1, y--, sumt = 0, j++, z = i - (1 + j);
		}
		if (y < 0)
		{
			if (a[0] != '0')
				break;
			i--;
			free(a), a = malloc(i + 1), a = array_initializer(a, i);
			z = i - 1, x = l1 - 1, y = l2 - 1, j = sumt = 0;
		}
		if (y >= 0)
		{
			sum = ((argv[1][x] - '0') * (argv[2][y] - '0')) + (a[z] - '0') + sumt;
			sumt = sum / 10, a[z] = (sum % 10) + '0';
		}
	}
	printf("%s\n", a);
	return (0);
}
