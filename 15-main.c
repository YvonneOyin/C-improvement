#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	/*A program that prints all odd numbers less than 50*/
	printf("All odd numbers less than 50:\n");
	while (i <= 50)
	{
		/*if (i % 2 != 0)*/
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}

		i++;
	}
	printf("\n");
	return (0);
}
