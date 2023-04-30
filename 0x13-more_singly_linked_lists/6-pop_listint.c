#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t linked list
 *
 * Description: Reconveys the head node’s data (n) to the list
 *
 * @head: pointer to first element in the linked list
 *
 * Return: To the information inside the elements that was removed,
 * Or always 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int main;

	if (!head || !*head)
		return (0);

	main = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (main);
}
