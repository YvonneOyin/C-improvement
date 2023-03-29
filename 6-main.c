// Making function call
/* Calculate a multiplication and print out the result */
#include <stdio.h>
/* This function multiplies two integer and returns the result */

int integer_multi(int x, int y)
{
	int result;
	result = x * y;
	return result;
}

int main()
{
	int total;

	total = integer_multi(8, 13);
	printf("The multiplication of 8 and 13 is %d.\n", total);
	return 0;
}
