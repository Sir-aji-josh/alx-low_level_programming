#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: we copy to this string
 * @src: we copy from this string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;

	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}

	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
