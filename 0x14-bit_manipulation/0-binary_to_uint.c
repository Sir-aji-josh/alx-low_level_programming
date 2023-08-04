#include "main.h"

/**
 * binary_to_uint – Converts A Binary Number To An UnI
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int UnI;
int lens, bases_two;

if (!b)
return (0);

UnI = 0;

for (lens = 0; b[lens] != '\0'; lens++)
;

for (lens--, bases_two = 1; lens >= 0; lens--, bases_two *= 2)
{
if (b[lens] != '0' && b[lens] != '1')
{
return (0);
}

if (b[lens] & 1)
{
UnI += bases_two;
}
}
return (UnI);
}


