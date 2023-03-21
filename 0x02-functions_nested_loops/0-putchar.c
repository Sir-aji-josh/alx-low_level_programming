#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int a, c;

	c = sizeof(str) / sizeof(int);
	for (a = 0; a < c; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
	return (0);
}
