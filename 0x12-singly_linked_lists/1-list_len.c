#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int str_count = 0;

	while (h)
	{
		str_count++;
		h = h->next;
	}
	return (str_count);
}
