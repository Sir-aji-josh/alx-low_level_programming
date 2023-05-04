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
	listint_t *good;
	listint_t *bad;

	good = head;
	bad = head;
	while (head && good && good->next)
	{
		head = head->next;
		good = good->next->next;

		if (head == good)
		{
			head = bad;
			bad =  good;
			while (1)
			{
				good = bad;
				while (good->next != head && good->next != bad)
				{
					good = good->next;
				}
				if (good->next == head)
					break;

				head = head->next;
			}
			return (good->next);
		}
	}
	return (NULL);
}
