#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list.
 *
 * @head: head of a list list_t
 *
 * Return: pointer to the reversed list
 *         or to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *n;

	a = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = n;
	}

	*head = a;
	return (*head);
}
