#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string to the modified
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int a = 0;
	int b = (_strlen(s) - 1);
	char tmp;

	while (a < b)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
		a++, b--;
	}
}
