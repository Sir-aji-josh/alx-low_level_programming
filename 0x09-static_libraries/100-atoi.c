#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: The integer converted from string
 */
int _atoi(char *s)
{
	int a, b, n, len, f, figure;

	a = 0;
	b = 0;
	n = 0;
	len = 0;
	f = 0;
	figure = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			figure = s[a] - '0';
			if (b % 2)
				figure = -figure;
			n = n * 10 + figure;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (n);
}

