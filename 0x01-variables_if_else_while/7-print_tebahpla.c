#include <stdio.h>

/**
 * main - print the alphabets in reverse order lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char C;

	for (C = 'z'; C >= 'a'; C--)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
