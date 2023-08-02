#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - prints all elements.
 *
 * @h: pointer to the list.
 *
 * Return: The nodes number
 */

size_t print_listint(const listint_t *h)
{
	size_t nodesN = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodesN++;
	}
	return (nodesN);
}
