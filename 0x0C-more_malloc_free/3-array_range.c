#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values and number of elements
 *
 * Return: Void(NULL) A pointer to the new array
 */
int *array_range(int min, int max)
{
	int *range;
	int size;
	int i = 0;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	range = malloc(sizeof(int) * size);

	if (range == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
