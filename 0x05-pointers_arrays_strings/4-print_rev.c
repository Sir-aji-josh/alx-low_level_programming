#include "main.h"

/**
 * print_rev - print a reverse of string followed by a line.
 * @s: input string
 * Return: no return
 */
void print_rev(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
		{
			break;
		}
		c++;
	}

	for (c--; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
