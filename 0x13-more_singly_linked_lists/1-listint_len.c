#include "lists.h"

/**
 * listint_len - get len of list
 * Return: size_t
 * @h: list
 */

size_t listint_len(const listint_t *h)
{
	size_t	count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
