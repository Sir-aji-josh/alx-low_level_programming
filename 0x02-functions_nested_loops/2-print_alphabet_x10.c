#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, c;

	for (a = 0; a <= 9; a++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
