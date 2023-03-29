#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: pointer to a string
 * Return: a string
 */
char *rot13(char *str)
{
	int a;
	int b;
	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "OPQRSTUVWXYZABCDEFGHIJKLMNopqrstuvwxyzabcdefghijklmn";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; s1[b] != '\0'; b++)
		{
			if (str[a] == s1[b])
			{
				str[a] = s2[b];
				break;
			}
		}
	}
	return (str);
}
