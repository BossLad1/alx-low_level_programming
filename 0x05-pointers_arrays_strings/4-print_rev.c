#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: parameter
 */
void print_rev(char *s)
{
	int m;

	while (s[m] != '\0')
		m++
	for (m = m - 1; m >= 0; m--)
		_putchar(s[m]);

	_putchar('\n');
}
