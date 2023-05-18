#include <stdio.h>

/**
  * main - Entry point
  *
  * a program that prints out all multiples of 6 less than 100
  *
  * Return: 0
  */

int main(void)
{
	int m = 1;

	printf("Multiples of 6 less than 100:\n");
	while (m <= 100)
	{
		if (m % 6 == 0)
		{
			printf("%d ", m);
		}
		m++;
	}
	printf("\n");

	return (0);
}
