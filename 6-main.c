#include <stdio.h>

/**
  * integer_multi - multiplies 2 integer
  * main - Entry point
  * @x: first variable
  * @y: second variable
  * Making function call
  * Calculate a multiplication and print out the result
  * This function multiplies two integer and returns the result
  * Return: result in integer_multi
  * Return 0
  */

int integer_multi(int x, int y)
{
	int result;

	result = x * y;
	return (result);
}

int main(void)
{
	int total;

	total = integer_multi(8, 13);
	printf("The multiplication of 8 and 13 is %d.\n", total);
	return (0);
}
