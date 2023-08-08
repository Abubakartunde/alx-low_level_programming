#include "main.h"
#include <stdio.h>

/**
 * main - This program that prints all arguements it receives
 * @argc: is an arguement counter
 * @argv: is an arguement values
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
