#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiply two positive numbers
 * @argv: arguments passed to the program
 * @argc: pointer array
 * Return: return integer
 */
int main(int argc, char *argv[])
{
	char *fprod, *nprod;
	int s, i, d, z = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = zero_finder(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = zero_finder(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	s = check_number(argv[1]) + check_number(argv[2]);
	fprod = array_initializer(s + 1);
	nprod = array_initializer(s + 1);
	for (i = check_number(argv[2]) - 1; i >= 0; i--)
	{
		d = find_digit(*(argv[2] + i)), find_prod(nprod, argv[1], d, z++);
		sum_num(fprod, nprod, s - 1);
	}
	for (i = 0; fprod[i]; i++)
	{
		if (fprod[i] != 'a')
			putchar(fprod[i]);
	}
	putchar('\n');
	free(nprod);
	free(fprod);
	return (0);
}
