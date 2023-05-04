#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop 
 *                     in a linked list.
 *
 * Description: finds the listint_t linked list
 *
 * @head: linked list to search for
 *
 * Return: To the address of the node,
 *         or where the been start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *good = head;
	listint_t *bad = head;

	if (!head)
		return (NULL);

	while (good && bad && bad->next)
	{
		bad = bad->next->next;
		good = good->next;
		if (bad == good)
		{
		        good = head;
			while (good != bad)
			{
				good = good->next;
				bad = bad->next;
			}
			return (bad);
		}
	}

	return (NULL);
}
