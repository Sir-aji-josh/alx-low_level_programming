#include <stdio.h>

/**
 * main - Print the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low[24] = "abcdfghijklmnoprstuvwxyz";
	int c;

	for (c = 0; c < 24; c++)
	{
		putchar(low[c]);
	}
	putchar('\n');
	return (0);
}
