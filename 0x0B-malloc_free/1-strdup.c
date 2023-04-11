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
	char *s;
	int indent, len;

	if (str == NULL)
		return (NULL);
	for (indent = 0; str[indent]; indent++)
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (indent = 0; str[indent]; indent++)
	{
	       s[indent] = str[indent];
	}
	s[len] = '\0';
	return (s);
}
