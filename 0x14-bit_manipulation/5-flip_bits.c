#include "main.h"

/**
 * flip_bits - Returns The Number of Bits You Would
 * Need To Flip To Get From One Number To Another
 * @n: Words Number One.
 * @o: Words Number Two.
 *
 * Return: Number Of Bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nbits;

for (nbits = 0; n || o; n >>= 1, o >>= 1)
{
if ((n & 1) != (o & 1))
nbits++;
}
return (nbits);
}

