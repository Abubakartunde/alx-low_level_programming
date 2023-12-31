#include <stdlib.h>

/**
 * array_iterator - this a function that executes a function given as
 * a parameter on each element of an array.
 * @array: This is a pointer to array
 * @size: The Size of the array
 * @action: action(function) to iterate throw array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
