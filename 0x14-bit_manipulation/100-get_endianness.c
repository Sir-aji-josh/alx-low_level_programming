#include "main.h"

/**
 * get_endianness - Checks The Endianness Of The Code
 *
 * Return: 0 If Big Endian, 1 If Little Endian
 */
int get_endianness(void)
{
unsigned int y;
char *x;

y = 1;
x = (char *) &y;

return ((int)*x);
}

