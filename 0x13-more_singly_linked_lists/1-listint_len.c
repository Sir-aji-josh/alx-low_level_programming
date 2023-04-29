#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function that returns the number of elements.
 *
 * @h: Pointer to the first node head
 *
 * Return: Number of elements in listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t element_list = 1;

	/*return 0 as no of elements when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count no of elements in listint_t list*/
		if (h->n != '\0')
			element_list++;

		/*go to next node that follow*/
		h = h->next;
	}

	return (element_list);
}
