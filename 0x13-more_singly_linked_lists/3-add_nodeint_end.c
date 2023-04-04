#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a linked list
 * @head: Pointer to the head of the linked list
 * @n: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL if an error occurs
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*newn;
	listint_t	*current;

	newn = malloc(sizeof(listint_t));
	while (!newn)
		return (NULL);
	newn->n = n;
	newn->next = NULL;
	if (*head == NULL)
		*head = newn;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newn;
	}
	return (newn);
}
