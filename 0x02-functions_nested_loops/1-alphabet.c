#include "main.h"
/**
 * print_alphabet - print lowercase alphabet
 * Return: Always 0
 */

void print_alphabet(void)
{
	int y;

	for (y = 'a'; y <= 'z'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
