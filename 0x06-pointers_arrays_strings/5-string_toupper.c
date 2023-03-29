#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
	}

	return (s);
}
