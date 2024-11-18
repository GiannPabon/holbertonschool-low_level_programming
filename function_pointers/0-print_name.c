#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name : points to the name in variable
 * @f : function pointer
 * Return: void
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
