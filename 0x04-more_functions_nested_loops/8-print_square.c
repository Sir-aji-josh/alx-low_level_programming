#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: the size of the square
 * Return: 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, k;

		for (a = 0; a < size; a++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

