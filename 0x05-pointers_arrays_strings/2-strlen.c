#include "main.h"

/**
 * _strlen - this is  a function that returns the length of a string.
 * @s: A string
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

