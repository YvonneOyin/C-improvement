#include <stdio.h>

/**
 * main - using sizeof to dynamically determine the size of char, int and float
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	printf("Size of type 'char': %lu bytes\n", sizeof(char));
	printf("Size of type 'int': %lu bytes\n", sizeof(int));
	printf("Size of type 'float': %lu bytes\n", sizeof(float));
	printf("Size of type of my variable n: %lu bytes\n", sizeof(n));
	return (0);
}
