#include "main.h"

/**
 * *_strcat - Functions the concatenates with two strings
 * @dest: First string to be concatenated
 * @src: Second string to be concatenated
 *
 * Return: Void always return to the values 0
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';

	return (dest);
}

