#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all the data (n) of the linked list, 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int	sum;
	listint_t	*current;

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
