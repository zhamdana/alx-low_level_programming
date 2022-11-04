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
	int ct, cn = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	ct = atoi(argv[1]);
	while (ct > 0)
	{
		if (ct > 24)
			ct -= 25;
		else if (ct > 9)
			ct -= 10;
		else if (ct > 5)
			ct -= 5;
		else if (ct > 1)
			ct -= 2;
		else if (ct > 0)
			ct -= 1;
		cn += 1;
	}
	printf("%d\n", cn);
		return (0);
}
