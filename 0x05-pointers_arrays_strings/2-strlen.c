#include "main.h"
/**
 * _strlen - Returns thelenght of a string
 * @s: the string pointer to be passed
 * Return: returns lenght of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
