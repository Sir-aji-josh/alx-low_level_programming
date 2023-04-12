#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter
 * @str: an input pointer of  string to duplicate
 * Return: Pointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *strdup;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	strdup = malloc(sizeof(char) * (len + 1));
	if (strdup == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
	       strdup[index] = str[index];
	}
	strdup[len] = '\0';
	return (strdup);
}
