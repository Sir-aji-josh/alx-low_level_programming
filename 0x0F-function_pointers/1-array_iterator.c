#include "function_pointers.h"
/**
 * array_iterator - functions that executes a function given as a parameter
 * @array: array.
 * @size: number of items contents inside the array
 * @action: pointer to fucntion
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
	else
		return;
}
