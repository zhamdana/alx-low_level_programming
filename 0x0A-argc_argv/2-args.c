#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: command line arguments number
 * @argv: array name
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
