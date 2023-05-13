#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: This is the integer
 * @next: This always points to the next node
 *
 * Description: This is a singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int is_palindrome(listint_t **head);
listint_t *add_nodeint_end(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);

#endif /* LISTS_H */
