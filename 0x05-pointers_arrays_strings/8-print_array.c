#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array of integer
 * @a: first int
 * @n: second int
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != n - 1)
			printf(". ");
	}
	printf("\n");
}
