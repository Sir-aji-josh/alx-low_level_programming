#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Function that converts a binary number
 *                  to unsigned int
 *
 * @b: string bearing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_nums = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);

		dec_nums = 2 * dec_nums + (b[a] - '0');
	}
	return (dec_nums);
}
