#include <string.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: a pointer to the head of the list_t list
 * @str: the string to be added to the list_t list
 *
 * Return: if the function fails NUll
 * otherwise - the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char dup;
	int len;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	return (*head);
}
