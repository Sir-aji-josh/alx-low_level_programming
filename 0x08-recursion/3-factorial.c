#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: interger we are checking.
 *
 * Return: -1 if n is lower than 0 for error 1 for success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
