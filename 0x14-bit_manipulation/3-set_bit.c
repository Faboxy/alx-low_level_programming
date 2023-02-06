#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the bit
 * @index: the index to set the value at - indices start at 0
 * Return: if an error return -1 otherwise 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
