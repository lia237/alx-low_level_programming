#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t	*tmp;
	int	data;

	if (*head == NULL)
		return(0);
	else
	{
		tmp = *head;
		data = (*head)->n;
		*head = (*head)->next;
	}
	free (tmp);
	return (data);
}
