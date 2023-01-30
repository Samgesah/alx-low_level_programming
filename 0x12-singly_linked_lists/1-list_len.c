#include "lists.h"

/**
 * list_len  - function to get length of node
 * @h: pointer to nodes
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h == NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
