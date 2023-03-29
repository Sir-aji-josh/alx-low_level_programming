#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
int j, d;
for (j = 0; j <= 9; j++)
{
if (j <= s)
printf("%02x", c[l * 10 + j]);
else
printf("  ");
if (j % 2)
putchar(' ');
}
for (d = 0; d <= s; d++)
{
if (c[l * 10 + d] > 31 && c[l * 10 + d] < 127)
putchar(c[l * 10 + d]);
else
putchar('.');
}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int t;
for (t = 0; t <= (size - 1) / 10 && size; t++)
{
printf("%08x: ", t * 10);
if (t < size / 10)
{
print_line(b, 9, t);
}
else
{
print_line(b, size % 10 - 1, t);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
