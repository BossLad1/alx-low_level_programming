#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: input to compare
 * @s2: against this other string 2
 * Return: 0 if s1 and s2 are equal
 */
int _strcmp(char *s1, char *s2)
{
	int y = 0, z;

	while (s1[y] != '\0' && s2[y] != '\0')
	{
		if (s1[y] != s2[y])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[y] - s2[y];
		}
		y++;
	}
	return (r);
}
