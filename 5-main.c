#include <stdio.h>

/**
 * integer_add - print result
 *
 * main - Entry point
 *
 * This function adds two integer and returns the result
 *
 * Return: result in integer_add
 *
 * @x: first variable
 *
 * @y: second variable
 */

int integer_add(int x, int y)
{
	int result;

	result = x + y;
	return (result);
}

int main(void)
{
	int sum;

	sum = integer_add(8, 13);
	printf("The addition of 8 and 13 is %d.\n", sum);

	return (0);
}
