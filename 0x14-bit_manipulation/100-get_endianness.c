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
        int num_counts = 1;
        char *endian = (char *)&num_counts;

        if (*endian == 1)
                return (1);

        return (0);
}
