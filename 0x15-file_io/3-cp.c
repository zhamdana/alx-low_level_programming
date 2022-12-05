#include "main.h"
#include <stdio.h>
/**
 * error_file - checks if files can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	ssize_t a, b;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp i j");
		exit(97);
	}
	i = open(argv[1], O_RDONLY);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(i, j, argv);
	a = 1024;
	while (a == 1024)
	{
		a = read(i, buf, 1024);
		if (a == -1)
			error_file(-1, 0, argv);
		b = write(j, buf, a);
		if (b == -1)
			error_file(0, -1, argv);
	}
	k = close(i);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}
	k = close(j);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}
	return (0);
}
