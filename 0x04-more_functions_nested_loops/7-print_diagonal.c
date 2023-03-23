#include "main.h"

/**
 * print_diagonal-a function that draws a diagonal line on the terminal
 * @n: the number of times the character \
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, s;

		for (i = 0; i < n; i++)
		{
			for (s = 0; s < n; s++)
			{
				if (s == i)
				{
					_putchar('\\');
				}
				else if (s < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
