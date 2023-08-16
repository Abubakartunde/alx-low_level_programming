#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - is a function that prints a name.
 * @name: pointer to the name to print
 * @f: function that print name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
