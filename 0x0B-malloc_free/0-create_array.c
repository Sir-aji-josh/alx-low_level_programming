#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of an array to be created
 * @c: the  character to initialized  the array c
 * Return: Null if pointer array is (0) or Null (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
