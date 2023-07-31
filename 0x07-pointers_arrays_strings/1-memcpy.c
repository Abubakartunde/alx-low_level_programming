#include "main.h"

/**
 * _memcpy - is a function that copys memory area
 * @dest: destination to copy
 * @src: source to copy from
 * @n: number of bytes
 * Return: returns pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
