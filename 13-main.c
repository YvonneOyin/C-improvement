#include <stdio.h>

/**
  * main - Entry point
  *
  * A program that prints the alphabet in lowercase, followed by a new line
  *
  * Return: 0
  */

int main(void)
{
	/**
	*char alphaBet;
	*
	* print lowercase
	*for (alphaBet = 'a'; alphaBet <= 'z'; alphaBet++)
	*{
	*printf("%c\n", alphaBet);
	*}
	*print uppercase
	*for (alphaBet = 'A'; alphaBet <= 'Z'; alphaBet++)
	*{
	*printf("%c\n", alphaBet);
	*}
	*return 0;
	*/

	char alphabet = 'a';

	/* print lowercase */
	while (alphabet <= 'z')
	{
		printf("%c\n", alphabet);
		alphabet++;
	}

	char alphaBet = 'A';

	/* print uppercase */
	while (alphaBet <= 'Z')
	{
		printf("%c\n", alphaBet);
		alphaBet++;
	}

	return (0);
}
