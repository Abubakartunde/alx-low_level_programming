#include "main.h"
#include <stdio.h>

/**
 * _strchr - is a function that locates a character.
 * @s: is an input string
 * @c: is an input character to locate string s
 * Return: returns pointer
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
