#include <stdio.h>

// Print out all numbers less than 20 indicating if even or odd

int main()
{
	int n = 1;

	while (n < 21)
	{
		if (n%2==0)
		{
			printf("%d is even\n", n);
		}
		else
		{
			printf("%d is odd\n", n);
		}

		// increment by 1
		// n = n + 1
		n++;
	}
	return 0;
}
