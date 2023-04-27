#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 * Description: Adds new node at the beginning of the list
 * @head: Pointer to the head of the list_t list
 * @str: String added to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_add_node;
	int len;

	new_add_node = malloc(sizeof(list_t));
	if (!new_add_node)
	{
		return (NULL);
	}
	/* Duplicate the string */
	new_add_node->str = strdup(str);
	if (new_add_node->str == NULL)
	{
		free(new_add_node);
		return (NULL);
	}
	/* Count the number of characters within square brackets */
	len = 0;
	while (str[len])
		len++;
	/* Set next pointer of new node to current head */
	new_add_node->next = *head;
	new_add_node->len = len;
	/* Set head to point to the new node */
	*head = new_add_node;

	return (new_add_node);
}
