#include <stdio.h>

/**
  * main - Entry point
  *
  * multiples of 3 under 120 in reverse order
  *
  * Return: 0
  */

int main(void)
{
	/**
	  *a program that print all number less than 20 in reverse order
	  *int i = 20;
	  *
	  *while (i > 0)
	  *{
	  *
	  *printf("%d ", i);
	  *i--;
	  *}
	  */

	/**
	  *print all numbers less than 100 in reverse order jumping 4 numbers
	  *int i = 100;
	  *
	  *while (i > 0)
	  *{
	  *printf("%d ", i);
	  *i-=5;	decrement by 5... i = i - 5
	  *}
	  */

	int i = 120;

	printf("Multiples of 3 under 120 in reverse order:\n");
	while (i >= 3)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
		i--;
	}
	printf("\n");

	return (0);
}
