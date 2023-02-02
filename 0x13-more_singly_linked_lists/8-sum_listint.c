#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all data (n) in a linked listint_t
 * @head: a pointer to the head of the linked listint_t list
 * Return: if the list is empty - 0,. else the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
