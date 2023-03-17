#include <stdio.h>

/**
 * main - Print all posible combination of single-digit numbers
 * using putchar to print data
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
