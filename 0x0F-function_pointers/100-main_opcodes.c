#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	char *operat = (char *) main;
	int a, b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (a = 0; a < b; a++)
	{
		printf("%02x", operat[a] & 0xFF);
		if (a != b - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
