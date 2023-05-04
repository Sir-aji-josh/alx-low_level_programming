#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t
 *                   linked list.
 *
 * Description: Reverses the listint_t linked list.
 * 
 * @head: A pointer to the address of the head of,
 *        the list_t list.
 *
 * Return: A pointer to first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *m;
	listint_t *n;

	m = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = n;
	}

	*head = m;
	return (*head);
}
