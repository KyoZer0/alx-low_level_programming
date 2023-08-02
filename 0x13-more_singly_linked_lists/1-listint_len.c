#include "lists.h"

/**
 * listint_len - Returns the number of elements.
 *
 * @h: pointer to the list.
 *
 * Return: The nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t nodesN = 0;

	while (h != NULL)
	{
		h = h->next;
		nodesN++;
	}
	return (nodesN);
}
