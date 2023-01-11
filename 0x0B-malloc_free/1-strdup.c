#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * which contains a copy of the string given
 * @str: the string to be copied
 * Return: a pointer to the newly allocated memory or NULL if it fails
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
			;
		i++;

	ptr = malloc(i * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
	ptr[j] = str[j];
	}
	return (ptr);
}
