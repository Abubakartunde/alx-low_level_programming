#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - is a function that searches a string.
 * @s: is an input string
 * @accept: is an input character
 * Return: is a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
