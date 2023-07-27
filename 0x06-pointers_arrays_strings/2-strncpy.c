#include "main.h"

/**
 * _strncpy - this is a function that copys the strings.
 * @dest: this an input string
 * @src: this is an input string
 * @n: this is an input integer
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
