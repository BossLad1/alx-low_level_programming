#include <stdio.h>
#include 'dog.h"
/**
* main - check the code for ALX students
* Return: Always 0.
*/
int main(void)
{
	dog_t my_dog;
	my_dog.name = "Bingo";
	my_dog.age = 2.1;
	my_dog.owner = "John";
	printf("My name is %s, and i am %lf :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
