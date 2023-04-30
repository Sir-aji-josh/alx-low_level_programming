#include "lists.h"

/**
 * free_listint2 - Function that frees a linked list
 *
 * @head: Pointer to listint_t list to be liberated
 */
void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
