#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list.
 *
 * description: Freed the linked listint_t list.
 *
 * @head: A pointer to the head of the list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_freed;

	while (head)
	{
		tmp_freed = head->next;
		free(head);
		head = tmp_freed;
	}
}
