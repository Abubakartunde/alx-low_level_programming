#include "main.h"

/**
 * _strncat - this is a function that concatenates two strings.
 * @dest: this is an input string
 * @src: this is an input string
 * @n: this is an input integer
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
