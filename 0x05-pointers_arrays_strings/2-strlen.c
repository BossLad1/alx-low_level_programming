#include "main.h"
/**
 * _strlen - Returns thelenght of a string
 * @s: the dtring pointer to be passed
 * Return: returns lenght of string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (strlen(s));
}
