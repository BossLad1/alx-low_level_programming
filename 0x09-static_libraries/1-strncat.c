#include "main.h"
/**
 * _strncat - funtion that concatenates two strings.
 * @dest: destination input
 * @src: source input
 * @n: most number of bytes from @src
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y, z;

	y = 0;
	while (dest[y])
		y++;
	for (z = 0; z < n && src[z] != '\0'; z++)
		dest[y + z] = src[z];
	dest[y + z] = '\0';
	return (dest);
}
