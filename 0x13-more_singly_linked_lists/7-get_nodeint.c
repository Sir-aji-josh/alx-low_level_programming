#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a listint_t linked list.
 *
 * Description - Discoversa listint_t linked list.
 *
 * @head: A pointer to  head of the listint_t linked list.
 *
 * @index: The index of the node to reconveys
 *
 * Return: To the existing node - NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        unsigned int i = 0;
        listint_t *tmp = head;

        while (tmp && i < index)
        {
                tmp = tmp->next;
                i++;
        }

        return (tmp ? tmp : NULL);
}
