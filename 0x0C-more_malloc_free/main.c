#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * check_number - check number length
 * @s: string measure
 * Return: return number length
 */
int check_number(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
/**
 * array_initializer - make new array and initialise it
 * @s: array size
 * Return: return pinter
 */
char *array_initializer(int s)
{
	char *a;
	int i;

	a = malloc(sizeof(char) * s);
	if (a == NULL)
		exit(98);
	for (i = 0; i < (s - 1); i++)
		a[i] = 'a';
	a[i] = '\0';
	return (a);
}
/**
 * zero_finder - find none 0 numbers
 * @s: string numbers
 * Return: return a string
 */
char *zero_finder(char *s)
{
	while (*s && *s == '0')
		s++;
	return (s);
}
/**
 * find_digit - transform character digit to int
 * @a: character to transform
 * Return: return integer
 */
int find_digit(char a)
{
	int d = a - '0';

	if (d < 0 || d > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (d);
}
/**
 * find_prod - multiply number string by single digit
 * @p: storage buffer
 * @m: number string
 * @d: single digit
 * @z: leading zeroes
 */
void find_prod(char *p, char *m, int d, int z)
{
	int ml, n, t = 0;

	ml = check_number(m) - 1;
	m += ml;
	while (*p)
	{
		*p = 'a', p++;
	}
	p--;
	while (z--)
	{
		*p = '0', p--;
	}
	for (; ml >= 0; ml--, m--, p--)
	{
		if (*m < '0' || *m > '9')
		{
			printf("Error\n");
			exit(98);
		}
		n = (*m - '0') * d, n += t, *p = (n % 10) + '0', t = n / 10;
	}
	if (t)
		*p = (t % 10) + '0';
}
/**
 * sum_num - add two string stored numbers
 * @fprod: storage of final running product
 * @nprod: next addition of product
 * @nl: length of next addition of product
 */
void sum_num(char *fprod, char *nprod, int nl)
{
	int num, tens = 0;

	while (*(fprod + 1))
		fprod++;
	while (*(nprod + 1))
		nprod++;
	for (; *fprod != 'a'; fprod--)
	{
		num = (*fprod - '0') + (*nprod - '0'), num += tens;
		*fprod = (num % 10) + '0';
		tens = num / 10, nprod--, nl--;
	}
	for (; nl >= 0 && *nprod != 'a'; nl--)
	{
		num = (*nprod - '0'), num += tens, *fprod = (num % 10) + '0';
		tens = num / 10, fprod--, nprod--;
	}
	if (tens)
		*fprod = (tens % 10) + '0';
}
