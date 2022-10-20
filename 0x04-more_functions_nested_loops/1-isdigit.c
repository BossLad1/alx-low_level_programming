#include "main.h"
/**
 * _isdigit - checks through digits
 * @c: a charcater argument
 * Return: 1 or 0 depending on the condition
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}

