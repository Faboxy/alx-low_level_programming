#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint - adds a new number at the end of a listint_t list
 * @head: the pointer to the address of the head of listint_t list
 * @n: the integer for the new node to contain
 * Return:if the function fails NULL, otherwise the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}

