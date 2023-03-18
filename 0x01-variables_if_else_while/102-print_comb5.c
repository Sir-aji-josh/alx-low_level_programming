#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int C, c;

	for (C = 0; C < 100; C++)
	{
		for (c = 0; c < 100; c++)
		{
			if (C < c)
			{
				putchar((C / 10) + 48);
				putchar((C % 10) + 48);
				putchar(' ');
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				if (C != 98 || c != 99)
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

