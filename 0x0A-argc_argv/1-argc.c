#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @args: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
