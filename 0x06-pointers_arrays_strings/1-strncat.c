#include "main.h"

/**
 * _strncat - A function that concatenates two strings.
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
