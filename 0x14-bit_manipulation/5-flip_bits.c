#include <stdio.h>
#include "main.h"

/**
 * flip_bits -A function that Counts the number of bits needed to be
 *             flipped to get from one number to another
 *
 * @n: The digits
 *
 * @m: The digit to flip n to.
 *
 * Return: The mandatory digits of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nums = n ^ m, bits = 0;

	while (nums > 0)
	{
		bits += (nums & 1);
		nums >>= 1;
	}

	return (bits);
}
