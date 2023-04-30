#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Funtion that adds a new node to a listint_t
 *                           list at a given position.
 *
 * @head: A pointer to the address of the head of,
 *        the listint_t list
 *        .
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 *
 * @n: The symbol for the new node that contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_add, *copy = *head;
	unsigned int node;

	new_add = malloc(sizeof(listint_t));
	if (new_add == NULL)
		return (NULL);

	new_add->n = n;

	if (idx == 0)
	{
		new_add->next = copy;
		*head = new_add;
		return (new_add);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new_add->next = copy->next;
	copy->next = new_add;

	return (new_add);
}
