#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of a listint_t list                  
 * @head: A pointer to the address of the head that was linked to the listint_t list.
 * @n: The integer for the new added node that the contain access address.
 *
 * Return: (NULL) or To the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_int, *last_int;

	new_int = malloc(sizeof(listint_t));
	if (new_int == NULL)
		return (NULL);

	new_int->n = n;
	new_int->next = NULL;

	if (*head == NULL)
		*head = new_int;

	else
	{
		last_int = *head;
		while (last_int->next != NULL)
			last_int = last_int->next;
		last_int->next = new_int;
	}

	return (*head);
}
