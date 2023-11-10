#include "function_pointers.h"

/**
 * print_name - This function prints a name
 *
 * @name: Input string or the input name
 * @f: Input function to print the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
