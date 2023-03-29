#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int j = 0;

	while (*s++)
		j++;
	return (j);
}

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
 */
char *rev_string(char *s)
{
	int l = _strlen(s), j = 0;
	char t;

	for (j = 0; j < l / 2; j++)
	{
		t = s[l - j - 1];
		s[l - j - 1] = s[j];
		s[j] = t;
	}
	return (s);
}
/**
 * infinite_add - adds arbitrarily long string of digits
 * @n1: the first digit string
 * @n2: the second digital string
 * @r: the result buffer
 * @size_r: the size of result buffer
 *
 * Return: char pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1), l2 = _strlen(n2), j = 0, a, b, c = 0;

	for (l1--, l2--, size_r--; l1 >= 0 || l2 >= 0 || c; l1--, l2--, j++)
	{
		if (j >= size_r)
			return (0);
		a = 0;
		b = 0;
		if (l1 >= 0)
			a = n1[l1] - '0';
		if (l2 >= 0)
			b = n2[l2] - '0';
		a = a + b + c;
		c = a / 10;
		a %= 10;
		r[j] = a + '0';
	}
	r[j] = '\0';
	return (rev_string(r));
}

