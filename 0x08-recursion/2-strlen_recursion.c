#include "main.h"

/**
 * _strlen_recursion - is a function that returns the length of a string.
 * @s: input string to printing
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
