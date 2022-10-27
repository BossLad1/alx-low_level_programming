#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: source input
 * Return: a pointer of the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int y, y2;

	y = 0;
	while (dest[y])
		y++;
	for (y2 = 0; src[y2] ; y2++)
		dest[y++] = src[y2];
	return (dest);
}
