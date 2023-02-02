#include <stdio.h>
#include <stdlib.h>
#include <lists.h>
/**
 * add_nodeint - adds a new number at the end of a listint_t list
 * @head: the pointer to the address of the head of listint_t list
 * @n: the integer for the new node to contain
 * Return:if the function fails NULL, otherwise the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new, *last;

        new = malloc(sizeof(listint_t));
        if (new == NULL)
                return (NULL);

        new->n = n;
        new->next = NULL;

        if (*head == NULL)
                *head = new;
 	else
        {
                last = *head;
                while (last->next != NULL)
                        last = last->next;
                last->next = new;
        }

        return (*head);
}

