#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: arguement counts
 * @argv: argument value, string that come after calling function
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
