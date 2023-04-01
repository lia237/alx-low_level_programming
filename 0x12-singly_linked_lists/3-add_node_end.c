#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: pointer to the new node, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int	len;
	list_t	*newn;
	list_t	*lastn;
	char	*strd;

	newn = malloc(sizeof(list_t));
	if (newn == NULL)
		return (NULL);

	strd = strdup(str);
	if (str == NULL)
	{
		free(newn);
		return (NULL);
	}
	len = 0;
	while (str[len])
		len++;

	newn->str = strd;
	newn->len = len;
	newn->next = NULL;

	if (*head == NULL)
		*head = newn;

	else
	{
		lastn = *head;
		while (lastn->next != NULL)
			lastn = lastn->next;
		lastn->next = newn;
	}

	return (*head);
}
