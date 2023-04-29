#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * Description: Function that prints all the elements of a listint_t list in array
 * @h: pointer to the listint_t
 *
 * Return: Number of nodes in list listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count_list = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;
		count_list++;
	}

	return (count_list);
}

