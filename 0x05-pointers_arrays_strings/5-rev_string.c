#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameter
 */
void rev_string(char *s)
{
	char rv = s[0];
	int m = 0;
	int n;

	while (s[m] != '\0')
		m++;
	for (n = 0; n < m; n++)
	{
		m--;
		rv = s[n];
		s[n] = s[m];
		s[m] = rv;
	}
}
