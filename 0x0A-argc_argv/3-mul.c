#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print the name of the program
 * @argc: command line arguments number
 * @argv: array name
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
		printf("Error\n");
	return (1);
}
