#include <stdio.h>

/**
* main - A function that prints the name of the file it was compiled form
*
* Return: void (0)
*/

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
