/**
  * main - Entry point
  * Reading input by calling getchar()
  * Return: 0
  */
#include <stdio.h>

int main(void)
{
	int ch1, ch2;

	printf("Please type in two characters together:\n");
	ch1 = getc(stdin);
	ch2 = getchar();
	printf("The first character entered is: %c\n", ch1);
	printf("The second character entered is: %c\n", ch2);

	return (0);
}
