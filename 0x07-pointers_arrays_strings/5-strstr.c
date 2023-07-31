#include "main.h"
#include <stdio.h>

/**
 * _strstr - this is a function that locates a substring.
 * @haystack: input string to search 
 * @needle: input string to locate string haystack
 * Return:  a pointer to the beginning of the substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
