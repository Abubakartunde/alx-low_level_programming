#include "main.h"

/**
 * set_string - this sets the value of a pointer to a char
 * @s: a double pointer to a string
 * @to: a pointer that set s to the string 
 * Return: Description of the value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
