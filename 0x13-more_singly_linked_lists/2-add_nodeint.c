#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the first node of the list.
 * @n: The integer value to add to the list.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t	*newn;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->next = *head;
	*head = newn;
	return (newn);
}
