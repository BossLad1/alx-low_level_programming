#include "main.h"
/**
 * puts2 - prints every character of a string starting with a new line
 * @str: string
 */
void puts2(char *str)
{
	int m = 0;

	for (; str[m] != '\0'; m++)
	{
		if ((m % 2) == 0)
			_putchar(str[m]);
		else
			continue;
	}
	_putchar('\n');

}
