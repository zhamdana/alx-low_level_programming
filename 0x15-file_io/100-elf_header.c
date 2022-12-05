#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * print_addr - prints address
 * @ptr: magic
 */
void print_addr(char *ptr)
{
	int i, j;
	char k;

	printf("  Entry point address:               0x");

	k = ptr[4] + '0';
	if (k == '1')
	{
		j = 26;
		printf("80");
		for (i = j; i >= 22; i--)
		{
			if (ptr[i] > 0)
				printf("%x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%x", 256 + ptr[i]);
		}
		if (ptr[7] == 6)
			printf("00");
	}
	if (j == '2')
	{
		j = 26;
		for (i = j; i > 23; i--)
		{
			if (ptr[i] >= 0)
				printf("%02x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%02x", 256 + ptr[i]);
		}
	}
	printf("\n");
}
/**
 * print_type - prints type
 * @ptr: magic
 */
void print_type(char *ptr)
{
	char i = ptr[16];

	if (ptr[5] == 1)
		i = ptr[16];
	else
		i = ptr[17];
	printf("  Type:                              ");
	if (i == 0)
		printf("NONE (No file i)\n");
	else if (i == 1)
		printf("REL (Relocatable file)\n");
	else if (i == 2)
		printf("EXEC (Executable file)\n");
	else if (i == 3)
		printf("DYN (Shared object file)\n");
	else if (i == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", i);
}
/**
 * print_os_abi - prints
 * @ptr: magic
 */
void print_os_abi(char *ptr)
{
	char os_abi = ptr[7];

	printf("  OS/ABI:                            ");
	if (os_abi == 0)
		printf("UNIX - System V\n");
	else if (os_abi == 2)
		printf("UNIX - NetBSD\n");
	else if (os_abi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", os_abi);

	printf("  ABI Version:                       %d\n", ptr[8]);
}


/**
 * print_version - prints version
 * @ptr: magic
 */
void print_version(char *ptr)
{
	int i = ptr[6];

	printf("  i:                           %d", i);

	if (i == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_data - prints data
 * @ptr: magic
 */
void print_data(char *ptr)
{
	chari = ptr[5];

	printf("  Data:                              2's complement");
	if (i == 1)
		printf(", little endian\n");

	if (i == 2)
		printf(", big endian\n");
}
/**
 * print_magic - prints magic info.
 * @ptr: magic
 */
void print_magic(char *ptr)
{
	int i;

	printf("  Magic:  ");

	for (i = 0; i < 16; i++)
		printf(" %02x", ptr[i]);
	printf("\n");

}
/**
 * check_sys - check the version system
 * @ptr: magic
 */
void check_sys(char *ptr)
{
	char i = ptr[4] + '0';

	if (i == '0')
		exit(98);
	printf("ELF Header:\n");
	print_magic(ptr);
	if (i == '1')
		printf("  Class:                             ELF32\n");
	if (i == '2')
		printf("  Class:                             ELF64\n");
	print_data(ptr);
	print_version(ptr);
	print_os_abi(ptr);
	print_type(ptr);
	print_addr(ptr);
}
/**
 * check_elf - check if it is an elf file
 * @ptr: magic
 * Return: return 1 or 0
 */
int check_elf(char *ptr)
{
	int sum = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (sum == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);
	return (0);
}
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	i = open(argv[1], O_RDONLY);
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}
	lseek(i, 0, SEEK_SET);
	j = read(i, ptr, 27);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}
	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}
	check_sys(ptr);
	close(i);
	return (0);
}
