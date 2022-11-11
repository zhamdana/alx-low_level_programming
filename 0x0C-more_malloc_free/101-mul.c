#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * zero_finder - find numbers that are zero
 * @vect: vector argument
 */
void zero_finder(char *vect[])
{
	int n, n1 = 1, n2 = 1;

	for (n = 0; vect[1][n]; n++)
		if (vect[1][n] != '0')
		{
			n1 = 0;
			break;
		}
	for (n = 0; vect[2][n]; n++)
		if (vect[2][n] != '0')
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
 * @vect: arguments vector
 * @n: array row
 * Return: return number length
 */
int check_number(char *vect[], int n)
{
	int l;

	for (l = 0; vect[n][l]; l++)
		if (!isdigit(vect[n][l]))
		{
			printf("Error\n");
			exit(98);
		}
	return (l);
}

/**
 * main - entry point for multiplying two positive numbers
 * @argc: number of arguments.
 * @vect: arguments vector.
 * Return: return integer
 */
int main(int argc, char *vect[])
{
	int l1, l2, i, sum, sumt, ii, jj, kk, ca;
	char *a;

	if (argc != 3)
		printf("Error\n"), exit(98);
	l1 = check_number(vect, 1), l2 = check_number(vect, 2);
	zero_finder(vect), i = l1 + l2, a = malloc(i + 1);
	if (a == NULL)
		printf("Error\n"), exit(98);
	a = array_initializer(a, i);
	kk = i - 1, ii = l1 - 1, jj = l2 - 1, ca = sumt = 0;
	for (; kk >= 0; kk--, ii--)
	{
		if (ii < 0)
		{
			if (sumt > 0)
			{
				sum = (a[kk] - '0') + sumt;
				if (sum > 9)
					a[kk - 1] = (sum / 10) + '0';
				a[kk] = (sum % 10) + '0';
			}
			ii = l1 - 1, jj--, sumt = 0, ca++, kk = i - (1 + ca);
		}
		if (jj < 0)
		{
			if (a[0] != '0')
				break;
			i--;
			free(a), a = malloc(i + 1), a = array_initializer(a, i);
			kk = i - 1, ii = l1 - 1, jj = l2 - 1, ca = sumt = 0;
		}
		if (jj >= 0)
		{
			sum = ((vect[1][ii] - '0') * (vect[2][jj] - '0')) + (a[kk] - '0') + sumt;
			sumt = sum / 10, a[kk] = (sum % 10) + '0';
		}
	}
	printf("%s\n", a);
	return (0);
}
