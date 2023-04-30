#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t linked list.
 *
 * Description: Reverses the listint_t linked list.
 * 
 * @head: A pointer to the address of the head of
 *        the list_t list.
 *
 * Return: A pointer to first node of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind  = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}

