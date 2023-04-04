#include "lists.h"

/**
 * pop_listint - deleted head node
 * @head: head node
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t	*tmp;
	int	data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
