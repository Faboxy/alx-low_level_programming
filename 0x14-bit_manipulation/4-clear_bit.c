#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @index: the index starting from 0 of the bit to be set
 * @n: a pointer to the number to set bit in
 * REturn: 1 if it worked else -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}

