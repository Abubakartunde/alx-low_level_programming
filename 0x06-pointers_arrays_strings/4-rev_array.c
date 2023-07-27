#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: an array
 * @n: a number of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
