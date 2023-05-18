/**
  * main - Entry point
  * Reading input by calling getc()
  * Return: 0
  */
#include <stdio.h>

int main(void)
{
	int ch;

	printf("Please type in one character:\n");
	ch = getc(stdin);
	printf("The character you just entered: %d\n", ch);

	return (0);
}
