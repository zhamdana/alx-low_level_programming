#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - print the name of the program
 * @argc: command line arguments number
 * @argv: array name
 * Return: return 0 or 1
 */
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		sum += atoi(argv[a]);
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
