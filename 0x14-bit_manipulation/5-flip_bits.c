#include "main.h"

/**
 * flip_bits - Returns The Number of Bits You Would
 * Need To Flip To Get From One Number To Another
 * @n: Words Number One.
 * @m: Words Number Two.
 *
 * Return: Number Of Bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits;

for (nbits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
nbits++;
}
return (nbits);
}

