#include "main.h"

/**
 * clear_bit - Sets The Value of A Bit To 0.
 * At A Given Index.
 * @n: Pointer To An Unsigned Long Int.
 * @index: Index of The Bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int o;

if (index > 63)
return (-1);

o = 1 << index;

if (*n & o)
*n ^= o;

return (1);
}

