#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the headnode of a litint_t linked list
 * 		and returns the haed node's data n
 * @head: a pointer to the address of the head of the listint_t list
 * Return: 0 if the linked list is empty
 * 		otherwise the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
