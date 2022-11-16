#include "function_pointers.h"
/**
  * print_name - print name
  * @name: input name
  * @f: function pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
