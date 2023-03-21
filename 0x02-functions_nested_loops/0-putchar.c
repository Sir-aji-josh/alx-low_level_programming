#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int C, c;

	c = sizeof(str) / sizeof(int);
	for (C = 0; C < c; C++)
	{
		_putchar(str[C]);
	}
	_putchar('\n');
	return (0);
}

