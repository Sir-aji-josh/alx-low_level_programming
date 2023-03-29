#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: string to capitalize
 * Return: capitalized first letters
 */

char *cap_string(char *a)
{
	int i, c;
	char *seperators = ",;.!?\"(){} \n\t";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
			for (c = 0; *(seperators + c) != '\0'; c++)
			{
				if (*(a + i - 1) == *(seperators + c))
				{
					*(a + i) -= 32;
					break;
				}
				else if (i == 0)
				{
					*(a + i) -= 32;
					break;
				}
			}
	}
	return (a);
}
