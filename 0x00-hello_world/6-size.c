#include <stdio.h>
#include <conio.h>
/**
 * main - entry
 * Return: Always 0
 */
int main(void)
{
	printf("size of a char: %2d byte(s)\n", sizeof(char));
	printf("size of a int: %2d  byte(s)\n", sizeof(int));
	printf("size of long int: %2d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %2d byte(s)\n", sizeof(long long int));
	printf("size of a float: %2d byte(s)\n", sizeof(float));
	return (0);
}
