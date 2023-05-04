#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list.
 *
 * Description: Function that prints the linked list.
 *
 * @head: List of type linked listint_t to print
 *
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int node;

	while (head)
	{
		node = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (node > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
