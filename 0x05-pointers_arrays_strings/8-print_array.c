#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements of an array of integers
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
