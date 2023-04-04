#include "lists.h"

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
