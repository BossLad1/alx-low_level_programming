#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: point to function
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
