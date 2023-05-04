#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - Function that finds the loop in a linked list.
 *
 * @head: head of a list.
 *
 * Return: To address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pv2;
	listint_t *prev;

	pv2 = head;
	prev = head;
	while (head && pv2 && pv2->next)
	{
		head = head->next;
		pv2 = pv2->next->next;

		if (head == pv2)
		{
			head = prev;
			prev =  pv2;
			while (1)
			{
				pv2 = prev;
				while (pv2->next != head && pv2->next != prev)
				{
					pv2 = pv2->next;
				}
				if (pv2->next == head)
					break;

				head = head->next;
			}
			return (pv2->next);
		}
	}
	return (NULL);
}

