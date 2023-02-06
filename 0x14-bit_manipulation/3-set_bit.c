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
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	*n |= max;
	return (1);
}
