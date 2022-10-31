#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: input pionter
 * @b: input variable
 * @n: unsigned int variable
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
