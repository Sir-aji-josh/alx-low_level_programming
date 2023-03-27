#include "main.h"

/**
 * puts_half - prints half of a string followed by \n
 * @str: string to be printed
 * Return: limit 
 */

void puts_half(char *str)
{
	int lim, j, i;

	lim = 0;

	while (str[lim] != '\0')
	{
		lim++;
	}

	if (lim % 2 == 0)
	{
		for (i = lim / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (lim % 2)
	{
		for (j = (lim - 1) / 2; j < lim - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
