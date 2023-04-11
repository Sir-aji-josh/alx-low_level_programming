#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Fuction which concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: Pointer to a new string created (Sucess), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, cc12;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = cc12 = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[cc12] != '\0')
		cc12++;
	concat = malloc(sizeof(char) * (i + cc12 + 1));
	if (concat == NULL)
		return (NULL);
	i = cc12 = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[cc12] != '\0')
	{
		concat[i] = s2[cc12];
		i++, cc12++;
	}
	concat[i] = '\0';
	return (concat);
}
