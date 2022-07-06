#include "function_pointers.h"

/**
 *  print_name - function that prints a name
 * @name: name to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && name != '\0' && f != NULL)
		f(name);
}
