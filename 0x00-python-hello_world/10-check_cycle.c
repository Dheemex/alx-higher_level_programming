#include "lists.h"

/**
 * check_cycle - it checks if a linked list do contains a cycle
 * @list: it denotes the linked list to check
 *
 * Return: 1 if the list has a complete  cycle, 0 if it doesnot
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
