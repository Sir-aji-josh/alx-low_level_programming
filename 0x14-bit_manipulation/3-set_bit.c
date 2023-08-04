#include "main.h"

/**
 * set_bit - Sets The Value of A Bit To 1.
 * At a Given Index.
 * @n: Pointer Of An Unsigned Long Int.
 * @index: Index Of The Bit.
 *
 * Return: -1 if it didn't, 1 if it worked.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int o;

if (index > 63)
return (-1);

o = 1 << index;
*n = (*n | o);

return (1);
}


