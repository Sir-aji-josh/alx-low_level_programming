#ifndef _LISTS_h
#define _LISTS_h

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure for Holberton project
 */
typedef struct dlistint_s
{
<<<<<<< HEAD
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
=======
        int n;
        struct dlistint_s *prev;
        struct dlistint_s *next;
>>>>>>> 3696ff57de6e664f80387db75be721b0904733fb
} dlistint_t;
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int sum_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
void free_dlistint(dlistint_t *head);

#endif

<<<<<<< HEAD
=======

>>>>>>> 3696ff57de6e664f80387db75be721b0904733fb
