#include "main.h"
/**
 * _isalpha - checks for char alphabet
 * @c: the char to be checked
 *
 * Return: 1 if char is letter lower or upper. else return 0
 */

int_isalpha(int c)

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);
	else
			return (0);
