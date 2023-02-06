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
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;
	return (bit_val);
}

