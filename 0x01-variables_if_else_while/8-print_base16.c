#include <stdio.h>

/**
 * main - print  all number base 16 in lowercase
 *
 * Return: Alwas 0 (Success)
 */
int main(void)
{
	int C;
	char c;

	for (C = 48; C < 58; C++)
	{
		putchar(C);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
