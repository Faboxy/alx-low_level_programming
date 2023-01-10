
#include "main.h"
#include <stdlib.h>
/**
 * *create_array - This function creates an array of chars and initializes
 * it with a specific char
 * @size: The size of array to be created
 * @c: THe char to be used in the initialization
 * Return: a pointer to the array if successful or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *ptArray;
unsigned int i;
ptArray = malloc(size * sizeof(char));

for (i = 0; i < size; i++)
{
ptArray[i] = c;
}
return (ptArray);
}
