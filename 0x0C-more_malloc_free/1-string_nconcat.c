#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: first string to be append
 * @s2: second string to be apped
 * @n: number of bytes to concat
 *
 * Retur: Void (NULL) OR Pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	nconcat = malloc(sizeof(char) * (len + 1));
	if (nconcat == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
		nconcat[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		nconcat[len++] = s2[index];
	nconcat[len] = '\0';
	return (nconcat);
}
