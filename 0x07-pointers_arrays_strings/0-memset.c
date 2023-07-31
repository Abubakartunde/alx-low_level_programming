#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @s: location for fill in
 * @b: char 2 fill location with
 * @n: number bytes for fill
 * Return: pointer for location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
