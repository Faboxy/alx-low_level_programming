#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_int list
 * @head: a pointer to the heade of the listint_t to bne freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
