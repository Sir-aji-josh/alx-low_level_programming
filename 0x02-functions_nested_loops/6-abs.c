#include "main.h"

/**
 * _abs-computes the absolute value of an integer
 * @a: the interger to compute its absolute value.
 * Return: absValue.
 *
 */
int _abs(int a)
{
	int c = a;
	int absValue;

	if (c < 0)
	{
		c = c * (-1);
	}
	absValue = c;
	return (absValue);
}
