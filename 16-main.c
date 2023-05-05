#include <stdio.h>

int main()
{
	int m = 1;

	//a program that prints out all multiples of 6 less than 100
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
	return 0;
}
