#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * description: master all the endianness
 *
 * Return: To big-endian - 0
 *         Or to if little-endian - 1
 */

int get_endianness(void)
{
	unsigned int C;
	char *C;

	a = 1;
	C = (char *) &a;

	return ((int)*C);
}
