#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: arguments types list passed in the function
 */
void print_all(const char * const format, ...)
{
	va_list val;
	unsigned int a = 0, b, c = 0;
	const char t_arg[] = "cifs";
	char *s;

	va_start(val, format);
	while (format && format[a])
	{
		b = 0;
		while (t_arg[b])
		{
			if (format[a] == t_arg[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(val, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(val, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(val, double)), c = 1;
			break;
		case 's':
			s = va_arg(val, char *), c = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} a++;
	}
	printf("\n"), va_end(val);
}
