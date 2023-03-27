#include "main.h"

/**
 * swap_int - A function that sweps the values of two integers
 * @a: first value pointer
 * @b: second value pointer
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

