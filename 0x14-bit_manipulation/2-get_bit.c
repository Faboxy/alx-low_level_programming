#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index starting from 0 of the index targetted
 * @n: the bit
 * Return: returns the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 0))
			return (-1);

	if ((n & (1 << index)) == 0)
		return (0) ;

	return (1);
}

