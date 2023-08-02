#include "main.h"

/**
 * _print_rev_recursion - it a function that prints a string in reverse,
 * followed by a new line.
 * @s: input string to printing
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
