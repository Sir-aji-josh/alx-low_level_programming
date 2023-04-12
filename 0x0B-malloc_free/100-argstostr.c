#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr -  function that concatenates all the arguments
 * @ac: argument
 * @av: argument
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++; /* add space for newline */
	}
	len++; /* add space for null terminator */
	str = malloc(len * sizeof(char));
	/* allocate memory for concatenated string*/
	if (str == NULL)
	{
		return (NULL);
	}
	/* concatenate arguments into result string*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index++] = av[i][j];
		}
		str[index++] = '\n';
	}
	str[index] = '\0';
	return (str);
}
