#include <stdio.h>

/**
 * main -Prints all single digit numbers of base 10 starting from 0,
 * using printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		printf("%d", c);
	}
	printf("\n");
	return (0);
}
