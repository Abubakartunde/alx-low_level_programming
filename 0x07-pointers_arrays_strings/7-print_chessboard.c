#include "main.h"

/**
 * print_chessboard - this is a function that prints a chessboard
 * @a: array input to print
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
