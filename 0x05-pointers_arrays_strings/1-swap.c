#include "main.h"
/**
 * swap_int - Swaps the value of two integers
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
