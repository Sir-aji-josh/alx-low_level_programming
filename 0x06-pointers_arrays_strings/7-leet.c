#include "main.h"

/**
 * leet - take strings and capitalize words
 * @a: string to capitalize
 * Return: capitalized words
 */

char *leet(char *a)
{
	int i, c;
	char check[] = "aAeEoOtTlL";
	char shift[] = "4433007711";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (c = 0; check[c]; c++)
			if (check[c] == *(a + i))
			{
				*(a + i) = shift[c];
				break;
			}
	}
	return (a);
}
