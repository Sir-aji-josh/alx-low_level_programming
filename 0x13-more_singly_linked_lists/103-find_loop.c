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
	listint_t *n2;

	good = head;
	n2 = head;
	while (head && good && good->next)
	{
		head = head->next;
		good = good->next->next;

		if (head == good)
		{
			head = n2;
			n2 =  good;
			while (1)
			{
				good = n2;
				while (good->next != head && good->next != n2)
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
