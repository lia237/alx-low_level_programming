#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to be returned.
 *
 * Return: Pointer to the nth node of the linked list, NULL if not found.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int	i;
	listint_t	*current;

	i = 0;
	current = head;
	if (current == NULL)
		return (NULL);
	while (i < index && current)
	{
		current = current->next;
		i++;
	}
	return (current);

}
