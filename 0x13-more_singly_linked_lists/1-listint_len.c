#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len -  Function that returns the number of elements.
 *
 * @h: Pointer to the first node head
 *
 * Return: Numbers of all in the elements in a linked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t num_element = 0;

	/* return 0 as number of elements when h is NULL */
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/* count no of element */
		if (h->n != '\0')
			num_element++;

		/* go to next node */
		h = h->next;
	}

	return (num_element);
}
