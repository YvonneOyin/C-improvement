// Making function call
/* Calculate an addition and print out the result */
#include <stdio.h>
/* This function adds two integer and returns the result */

int integer_add(int x, int y)
{
	int result;
	result = x + y;
	return result;
}

int main()
{
	int sum;

	sum = integer_add(8, 13);
	printf("The addition of 8 and 13 is %d.\n", sum);
	return 0;
}
