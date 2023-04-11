#include "lists.h"
#include <stdlib.h>


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t	*newn;
	char	*news;
	size_t	len;
	int	i;

	newn = malloc(sizeof(list_t));
	if (!newn)
		return (NULL);
	news = strdup(str);
	if (!news)
	{
		free(newn);
		return (NULL);
	}
	i = 0;
	while (str[i])
		i++;
	len = i;
	newn->str = news;
	newn->len = len;
	newn->next = *head;
	printf ("%p\n", str);
	*head = newn;
	return (newn);
}
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
}
