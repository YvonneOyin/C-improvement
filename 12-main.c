#include <stdio.h>

// a program that determines if a year is a leap year or not
// A leap year is a year divided by 4

int main()
{
	int year;

	// prompt user for the year
	printf("Please Enter a Year in the Format YYYY: ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				printf("%d is a leap year.\n", year);
			else
				printf("%d is not a leap year.\n", year);
		}
		else
			printf("%d is a leap year.\n", year);
	}
	else
		printf("%d is not a leap year.\n", year);

	return 0;
}

