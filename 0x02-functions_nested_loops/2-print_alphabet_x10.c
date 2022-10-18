#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet x10
 */

void print_alphabet_x10(void)
{
	int y;
	int z;

	for (z = 0; z < 10; z++)
	{

		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
	_putchar('\n');
	}
}
