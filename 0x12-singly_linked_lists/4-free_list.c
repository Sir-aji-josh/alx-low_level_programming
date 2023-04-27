#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * Description: Frees a linked list
 * @head: A pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *current_node;

	if (head == NULL)
		return;

	while (head)
	{
		current_node = head->next;
		free(head->str);
		free(head);
		head = current_node;
	}
}
