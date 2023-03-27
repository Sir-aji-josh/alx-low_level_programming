#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return limit
 */
void puts_half(char *str)
{
        int lim = 0, i;

        while (lim >= 0)
        {
                if (str[lim] == '\0')
                        break;
                lim++;
        }

        if (lim % 2 == 1)
                i = lim / 2;
        else
                i = (lim - 1) / 2;

        for (i++; i < lim; i++)
                _putchar(str[i]);
        _putchar('\n');
}

