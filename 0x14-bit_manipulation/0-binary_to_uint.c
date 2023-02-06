#include "main.h"
#include <stdio.h>
/**
 * binar_to_vint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_vint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 1 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}
