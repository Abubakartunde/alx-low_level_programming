#include <stdio.h>

/**
 * main - The entry point for program to get header of ELF file
 * @argc: The number of arguments
 * @argv: The pointer to array of arguments
 * Return: 1 if successful, error code if fail
 */
int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
