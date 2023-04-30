#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that removes the node at a given
 *                           index of a listint_t list.
 *
 * @head: A pointer to the address of the head of,
 *        the listint_t list.
 *
 * @index: The index of the node to be removed - indices start at 0.
 *
 * Return: On success - 1. else On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tempo = copy->next;
	copy->next = tempo->next;
	free(tempo);
	return (1);
}
