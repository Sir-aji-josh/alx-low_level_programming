#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: the string bytes
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, b;

	for (i = 0; *s != '\0'; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
