#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

