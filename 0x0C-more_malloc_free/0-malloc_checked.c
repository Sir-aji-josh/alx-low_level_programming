#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - use of malloc to allocate memory
 * @b: The size of memory to be allocated
 *
 * Return: Nothing or Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *checked;

	checked = malloc(b);
	if (checked == NULL)
		exit(98);
	return (checked);
}
