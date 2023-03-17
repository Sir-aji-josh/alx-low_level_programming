#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * 01 and 10 are considered same combination of two digits 0 and 1
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int C, c;

	for (C = 48; C <= 56; C++)
	{
		for (c = 49; c <= 57; c++)
		{
			if (c > C)
			{
				putchar(C);
				putchar(c);
				if (C != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
