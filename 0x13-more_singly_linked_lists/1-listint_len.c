#include <stdio.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a linked
 * listint_t list
 * @h: a pointer to the head of the listint_t list
 * Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
