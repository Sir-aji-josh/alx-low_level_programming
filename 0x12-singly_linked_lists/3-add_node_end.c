#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * Description: Adds new node at the end of a list_t list
 * @head: Pointer to pointer to the head node of the list
 * @str: String stored in the new node
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_add_node, *current_node;

	if (!head)
		return (NULL);
	new_add_node = malloc(sizeof(list_t));
	if (!new_add_node)
		return (NULL);
	/* Duplicate the string */
	new_add_node->str = strdup(str);
	if (!new_add_node->str)
	{
		free(new_add_node);
		return (NULL);
	}
	/* Count the number of characters within square brackets */
	new_add_node->len = strlen(str);
	new_add_node->next = NULL;
	/* If the linked list is empty, the new node becomes the head */
	if (!*head)
	{
		*head = new_add_node;
		return (new_add_node);
	}
	current_node = *head;
	/* Traverse the list until the last node is reached */
	while (current_node->next)
	{
		current_node = current_node->next;
	}
	/* Add the new node to the end of the list */
	current_node->next = new_add_node;
	return (new_add_node);
}
