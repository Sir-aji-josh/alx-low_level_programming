#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - The function that adds a new node
 *               at the beginning of a listint_t list.
 *
 * Description: Adds new node at the beginning of the list
 *
 * @head: Pointer to the head of the listint_t list address.
 *
 * @n: symbol to add to the linked list
 *
 * Return: To the address of the new element, 
 *               or back NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new_node;

        new_node = malloc(sizeof(listint_t));
        if (!new_node)
        {
                return (NULL);
        }

        /* New added node */
        new_node->n = n;

        /* Set next pointer of new added node to current head */
        new_node->next = *head;

        /* Set head to point to the  new added node */
        *head = new_node;

        return (new_node);
}
