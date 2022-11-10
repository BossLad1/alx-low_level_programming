#include <stdlib>
/**
 * malloc_checked - prototype, allocates memory
 * @b: bytes
 * Return: a pointer to the allocated memory
 * exit with 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *new_mem;

	new_mem = malloc(b);
	if (new_mem == NULL)
		exit(98);
	return (new_mem);
}
