/**
  * main - Entry point
  * Outputting a character with putc()
  * Return: 0
  */
#include <stdio.h>

int main(void)
{
	int ch;

	ch = 108;
	printf("The character that has numeric value of 108 is:\n");
	putc(ch, stdout);
	printf("\n");

	return (0);
}
