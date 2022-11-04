#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: command line arguments number
 * @argv: array name
 * Return: return 0
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
