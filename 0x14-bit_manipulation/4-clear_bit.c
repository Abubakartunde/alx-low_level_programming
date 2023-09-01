#include "holberton.h"
#include <stdio.h>

/**
 * clear_bit - The function that sets a bit to 0 at given index
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: one if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
