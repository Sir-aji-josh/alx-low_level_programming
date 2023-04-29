#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - The function that adds a new node at the beginning of a listint_t list.
 *
 * Description: Adds new node at the beginning of the list in listint_t.
 *
 * @head: Pointer to the head of the listint_t list address.
 *
 * @n: Is the that contain the details about the added new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new_list;

        new_list = malloc(sizeof(listint_t));
        if (!new_list)
        {
                return (NULL);
        }

        /* New added node */
        new_list->n = n;

        /* Set next pointer of new added node to current head */
        new_list->next = *head;

        /* Set head to point to the previous new added node */
        *head = new_list;

        return (new_list);
}

